# Iris Manriquez
# Lab 9 Task One and Three
# February 26, 2018

import sys
from PyQt5.QtWidgets import QApplication, QWidget, QPushButton, QVBoxLayout, QLabel
from PyQt5.QtCore import pyqtSlot

class Example(QWidget):
    def __init__(self):
        super().__init__()
        box = QVBoxLayout()
        self.mylabel = QLabel('Iris', self)

        box.addWidget(self.mylabel)

        self.setLayout(box)
        self.setGeometry(100,100,600,400)
        self.show()

        self.button = QPushButton("Button 1", self)
        self.bottomLabel = QLabel('Button 1 has not clicked')
        self.button.clicked.connect(self.clicked)

        self.secondButton=QPushButton("Button 2", self)
        self.secLabel = QLabel('Button 2 has not clicked')
        self.secondButton.clicked.connect(self.clicked)

        box.addWidget(self.button)
        box.addWidget(self.secondButton)
        box.addWidget(self.secLabel)
        box.addWidget(self.bottomLabel)

        self.setLayout(box)

    @pyqtSlot()
    def clicked(self):
        self.bottomLabel.setText('Button 1 has been clicked')
        self.secLabel.setText('Button 2 has been clicked')
app = QApplication(sys.argv)
ex = Example()
sys.exit(app.exec_())
