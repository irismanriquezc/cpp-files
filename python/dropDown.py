# Iris Manriquez
# CST 205
# Lab 10



import sys
from PyQt5.QtWidgets import (QApplication, QWidget, QLabel, QPushButton,
                                QLineEdit, QHBoxLayout, QVBoxLayout, QDialog,
                                QTextBrowser, QComboBox)
from PyQt5.QtCore import pyqtSlot
from PyQt5.QtGui import QColor

colorD= {
    'Choose one':{},
    'Salmon': {'RGB':(250,128,114), 'Hex': '#FA8072'},
    'Light Pink': {'RGB':(255, 182, 193), 'Hex': '#FFB6C1'},
    'Tomato': {'RGB':(255, 99, 71), 'Hex': '#FF6347'},
    'Gold': {'RGB':(255, 215, 0), 'Hex': '#FFD700'}
}


class colors(QWidget):
    def __init__(self, color):
        super().__init__()
        self.setAutoFillBackground(True)
        pal= self.palette()
        pal.setColor(self.backgroundRole(), QColor(color[0],color[1], color[2]))
        self.setPalette(pal)


class Example(QWidget):
    def __init__(self):
        super().__init__()
        myBox = QVBoxLayout()

        self.comBox= QComboBox()
        self.comBox.addItems(colorD)

        self.setLayout(myBox)
        self.show()

        self.button= QPushButton('Press')
        self.button.clicked.connect(self.clicked)


        self.label1= QLabel('RGB: ')
        self.secLabel = QLabel('Hex Value: ')
        self.comBox.currentIndexChanged.connect(self.selected)



        myBox.addWidget(self.comBox)
        myBox.addWidget(self.secLabel)
        myBox.addWidget(self.label1)
        myBox.addWidget(self.button)


        self.setLayout(myBox)

    @pyqtSlot()
    def clicked(self):
        text = self.comBox.currentText()
        tup= colorD[text]['RGB']
        self.new_win= colors(tup)
        self.new_win.show()

    def selected(self):
        my_text = self.comBox.currentText()
        self.label1.setText(f"RGB: {colorD[my_text]['RGB']}")
        self.secLabel.setText(f"Hex: {colorD[my_text]['Hex']}")
app = QApplication(sys.argv)
ex = Example()
sys.exit(app.exec_())
