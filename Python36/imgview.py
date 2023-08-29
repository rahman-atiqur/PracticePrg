#----------------
#
# Atiqur Rahman
#
#----------------

import glob
import numpy as np
import cv2
from matplotlib import pyplot as plt


filelist = glob.glob('pp_size/*.jpg')


ln=len(filelist)
for i in range(ln):
    img=cv2.imread(filelist[i])
    resized_image = cv2.resize(img, (300, 450))

    #img=cv2.imread('pp_size/02.jpg')
    #cv2.imshow('image',img)
    #cv2.imshow('image',resized_image)
    cv2.imshow('image-'+str(i+1),img)
    cv2.waitKey(1500)
    cv2.destroyAllWindows()
            
