
# import cv2 as cv
# img = cv.imread("photos\Screenshot 2025-09-03 151849.png")
# if img is not None:
#     gray =cv.cvtColor(img,cv.COLOR_BGR2GRAY)
# else:
#     print("ERROR IMAGE IS NOT FOUND")

# cv.imshow("akthargraytype",gray)
# cv.waitKey(0)
# cv.destroyAllWindows()



import cv2 as cv
img = cv.imread("photos\Screenshot 2025-09-03 151849.png")
if img is not None:
    gray =cv.cvtColor(img,cv.COLOR_BGR2GRAY)
    cv.imshow("akthar2",img)
    cv.imshow("akthar gray",gray)
    cv.waitKey(0)
    cv.destroyAllWindows()
else :
    print("image is not found")



# import cv2 as cv
# adress =input("enter the address of the photo : ")
# image = cv.imread(adress)
# if image is None:
#      print("Image not found at the given address")
# else:
#     request = input("Do you want to show or save? ")
#     output_name = input("Enter the output name: ")
     
# if request.lower() == "show" :
#     cv.imshow(output_name,image)
#     cv.waitKey(0)
#     cv.destroyAllWindows()
# elif request.lower() == "save":
#         cv.imwrite(output_name + ".jpg", image)
#         print("Image saved successfully as", output_name + ".jpg")
# else :
#      print("invalid option")



# import cv2 as cv
# address = input("enter the address of the photos :")
# image = cv.imread(address)
# if image is None:
#     print("ERROR:image not found")
# else :
#      request = input("gray or color? :")
#      if request.lower() == "color" :
#           cv.imshow("aktharcolor",image)
#           cv.waitKey(0)
#           cv.destroyAllWindows()
#      elif request.lower() == "gray":
#           gray=cv.cvtColor(image,cv.COLOR_RGB2GRAY)
#           cv.imshow("akthar gray",gray)
#           cv.waitKey(0)
#           cv.destroyAllWindows()
#      else:
#           print("invalid option")


# import cv2 as cv
# adress = r"photos\Screenshot 2025-09-03 151849.png"
# image = cv.imread(adress)
# if image is None:
#     print("ERROR:image is not found") 
# else:
#     request = input("color or gray ? :")
#     if request.lower() == "color" :
#         cv.imshow("akthar_color",image)
#         cv.waitKey(0)
#         cv.destroyAllWindows()
#     elif request.lower() == "gray" :
#         gray = cv.cvtColor(image,cv.COLOR_BGR2GRAY)
#         cv.imshow("akthar_gray",gray)
#         cv.waitKey(0)
#         cv.destroyAllWindows()



# import cv2 as cv 
# address = r"photos\Screenshot 2025-09-03 151849.png"
# image = cv.imread(address)
# if image is not None:
#     cropped = image[0:300,20:400]
#     cv.imshow("orginal",image)
#     cv.imshow("cropped",cropped)
#     cv.waitKey(0)
#     cv.destroyAllWindows()
# else :
#     print("ERROR:image not found")



# import cv2 as cv
# "photos\Screenshot 2025-09-03 151849.png"
# adress = r
# image = cv.imread(adress)
# if image is not None:
#     h,w = image.shape[:2]
#     center = (w//2,h//2)
#     M=cv.getRotationMatrix2D(center,-100,1.0)
#     rotated = cv.warpAffine(image,M,(w,h))
#     cv.imshow("orginal",image) 
#     cv.imshow("rotated 90",rotated)
#     cv.waitKey(0)
#     cv.destroyAllWindows()
# else:
#     print("ERROR:image is not found")


# import cv2 as cv 
# adress = r"photos\Screenshot 2025-09-03 151849.png"
# image = cv.imread(adress)
# if image is not None :
#     flip =cv.flip(image,0)
#     cv.imshow("orginal",image)
#     cv.imshow("flipped",flip)
#     cv.waitKey(0)
#     cv.destroyAllWindows()
# else :
#     print("ERROR:image not found ")

# import cv2 as cv
# adress = r"photos\Screenshot 2025-09-03 151849.png"
# image = cv.imread(adress)
# if image is not None :
#     pt1 = (100,50)
#     pt2 = (50,200)
#     color = (255,0,0)
#     image1 = cv.line(image,pt1,pt2,color,4)
#     cv.imshow("lined image",image1)
#     cv.waitKey(0)
#     cv.destroyAllWindows()
# else:
#     print("ERROR:iamge not found")
    
    






