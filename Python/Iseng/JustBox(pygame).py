import pygame

# init
pygame.init()

# Running Game
isRun = True

# Display Surface Object
window_width = 500
window_length = 500
window = pygame.display.set_mode((window_width,window_length))

# object game
# position
x = 250
y = 250

# size
length = 20
width = 20

# speed
speed = 1

while isRun:
    pygame.time.delay(10)
    
    # user input, database input
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            isRun = False

    # Keyboard action
    keys = pygame.key.get_pressed()

    #left
    if keys[pygame.K_LEFT] and x > 0 :
        x -= speed
    
    if keys[pygame.K_RIGHT] and x < window_width - width:
        x += speed
    
    if keys[pygame.K_DOWN] and y < window_length - length:
        y += speed
    
    if keys[pygame.K_UP] and y > 0:
        y -= speed

    # update asset
    window.fill((255,255,255))
    pygame.draw.rect(window,(0,0,255),(x,y,length,width))
    # render display
    pygame.display.update()

pygame.quit()
