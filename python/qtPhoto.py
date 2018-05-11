# Iris Manriquez
# Lab 9 Task Two
# February 26, 2018
import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLabel
from PyQt5.QtGui import QPixmap


class ImageExample(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle('Bobs Burgers')
        self.picLabel = QLabel(self)
        self.imagen = QPixmap('lol.jpg')
        self.picLabel.setPixmap(self.imagen)
        self.resize(self.imagen.width(),self.imagen.height())

        self.show()

app = QApplication(sys.argv)
image_window = ImageExample()
sys.exit(app.exec_())
