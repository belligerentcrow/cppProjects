import discord 
import os

client = discord.Client()

@client.event 
async def on_ready(): 
    print('online as {0.user}'.format(client))

@client.event
async def on_message(message):
    if message.author == client.user:
        return 
    
    if message.content.startswith('hello'):
        await message.channel.send('hi!')
    
client.run('OTc1NzQ3MDkwNTQ4NDA0Mjc0.G5B0IK.as0_AoFzHbtYRIzoGn6x4jUX9LiDG1CxejOvBs')
