#!/usr/bin/env python3

songs = [
    ('Kiss of Death', 'Dokken'),
    ('The Trooper', 'Iron Maiden'),
    ('Master of Puppets', 'Metallica'),
    ('The Ripper', 'Judas Priest'),
    ('Rock Bottom', 'UFO'),
    ('I Surrender', 'Rainbow'),
    ('Fairies wear Boots', 'Black Sabbath')
]

# We're forced to use both values, so we use _ to ignore the band value
for song,_ in songs:
    print(f'Song: {song}')
