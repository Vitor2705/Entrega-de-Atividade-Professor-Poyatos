hand = 0

def on_gesture_shake():
    global hand
    hand = randint(1, 3)
    if hand == 1:
        basic.show_leds("""
            # # # # #
                        # . . . #
                        # . . . #
                        # . . . #
                        # # # # #
        """)
        music.play_sound_effect(music.create_sound_effect(WaveShape.SINE,
                5000,
                0,
                255,
                0,
                500,
                SoundExpressionEffect.NONE,
                InterpolationCurve.LINEAR),
            SoundExpressionPlayMode.UNTIL_DONE)
    elif hand == 2:
        basic.show_leds("""
            . . . . .
                        . # # # .
                        . # # # .
                        . # # # .
                        . . . . .
        """)
        music.play_sound_effect(music.create_sound_effect(WaveShape.SINE,
                2465,
                2465,
                255,
                255,
                500,
                SoundExpressionEffect.NONE,
                InterpolationCurve.LINEAR),
            SoundExpressionPlayMode.UNTIL_DONE)
    else:
        basic.show_leds("""
            # # . . #
                        # # . # .
                        . . # . .
                        # # . # .
                        # # . . #
        """)
        music.play_sound_effect(music.create_sound_effect(WaveShape.SINE,
                361,
                254,
                255,
                181,
                500,
                SoundExpressionEffect.NONE,
                InterpolationCurve.LINEAR),
            SoundExpressionPlayMode.UNTIL_DONE)
input.on_gesture(Gesture.SHAKE, on_gesture_shake)