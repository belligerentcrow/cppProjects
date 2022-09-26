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
    
client.run('  ___ EH VOLEVI____  ')

