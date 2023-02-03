cmake_minimum_required(VERSION 3.5)

# set the project name
project(Tomb1Main VERSION 2.12)

set (CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake)

find_package(SDL2 REQUIRED)
find_package(FFmpeg REQUIRED)
find_package(ZLIB REQUIRED)
find_package(OpenGL REQUIRED)

# add the executable
add_executable(Tomb1Main WIN32
	src/config.c
	src/filesystem.c
	src/game/box.c
	src/game/camera.c
	src/game/clock.c
	src/game/collide.c
	src/game/creature.c
	src/game/effect_routines/bubbles.c
	src/game/effect_routines/chain_block.c
	src/game/effect_routines/dino_stomp.c
	src/game/effect_routines/earthquake.c
	src/game/effect_routines/explosion.c
	src/game/effect_routines/finish_level.c
	src/game/effect_routines/flicker.c
	src/game/effect_routines/flipmap.c
	src/game/effect_routines/flood.c
	src/game/effect_routines/lara_effects.c
	src/game/effect_routines/powerup.c
	src/game/effect_routines/raising_block.c
	src/game/effect_routines/sand.c
	src/game/effect_routines/stairs2slope.c
	src/game/effect_routines/turn_180.c
	src/game/effects.c
	src/game/effects/blood.c
	src/game/effects/exploding_death.c
	src/game/effects/gun.c
	src/game/effects/gunshot.c
	src/game/fmv.c
	src/game/game/game.c
	src/game/game/game_cutscene.c
	src/game/game/game_demo.c
	src/game/game/game_draw.c
	src/game/game/game_pause.c
	src/game/gamebuf.c
	src/game/gameflow.c
	src/game/gun/gun.c
	src/game/gun/gun_misc.c
	src/game/gun/gun_pistols.c
	src/game/gun/gun_rifle.c
	src/game/input.c
	src/game/inventory/inventory.c
	src/game/inventory/inventory_func.c
	src/game/inventory/inventory_ring.c
	src/game/inventory/inventory_vars.c
	src/game/items.c
	src/game/lara/lara.c
	src/game/lara/lara_cheat.c
	src/game/lara/lara_col.c
	src/game/lara/lara_control.c
	src/game/lara/lara_draw.c
	src/game/lara/lara_hair.c
	src/game/lara/lara_look.c
	src/game/lara/lara_misc.c
	src/game/lara/lara_state.c
	src/game/level.c
	src/game/los.c
	src/game/lot.c
	src/game/music.c
	src/game/objects/common.c
	src/game/objects/creatures/ape.c
	src/game/objects/creatures/bacon_lara.c
	src/game/objects/creatures/baldy.c
	src/game/objects/creatures/bat.c
	src/game/objects/creatures/bear.c
	src/game/objects/creatures/centaur.c
	src/game/objects/creatures/cowboy.c
	src/game/objects/creatures/crocodile.c
	src/game/objects/creatures/cutscene_player.c
	src/game/objects/creatures/larson.c
	src/game/objects/creatures/lion.c
	src/game/objects/creatures/mummy.c
	src/game/objects/creatures/mutant.c
	src/game/objects/creatures/natla.c
	src/game/objects/creatures/pierre.c
	src/game/objects/creatures/pod.c
	src/game/objects/creatures/raptor.c
	src/game/objects/creatures/rat.c
	src/game/objects/creatures/skate_kid.c
	src/game/objects/creatures/statue.c
	src/game/objects/creatures/torso.c
	src/game/objects/creatures/trex.c
	src/game/objects/creatures/wolf.c
	src/game/objects/effects/blood.c
	src/game/objects/effects/body_part.c
	src/game/objects/effects/bubble.c
	src/game/objects/effects/earthquake.c
	src/game/objects/effects/explosion.c
	src/game/objects/effects/gunshot.c
	src/game/objects/effects/missile.c
	src/game/objects/effects/ricochet.c
	src/game/objects/effects/splash.c
	src/game/objects/effects/twinkle.c
	src/game/objects/effects/waterfall.c
	src/game/objects/general/boat.c
	src/game/objects/general/bridge.c
	src/game/objects/general/cabin.c
	src/game/objects/general/cog.c
	src/game/objects/general/door.c
	src/game/objects/general/keyhole.c
	src/game/objects/general/misc.c
	src/game/objects/general/pickup.c
	src/game/objects/general/puzzle_hole.c
	src/game/objects/general/save_crystal.c
	src/game/objects/general/scion.c
	src/game/objects/general/switch.c
	src/game/objects/general/trapdoor.c
	src/game/objects/traps/damocles_sword.c
	src/game/objects/traps/dart.c
	src/game/objects/traps/falling_block.c
	src/game/objects/traps/falling_ceiling.c
	src/game/objects/traps/flame.c
	src/game/objects/traps/lava.c
	src/game/objects/traps/lightning_emitter.c
	src/game/objects/traps/midas_touch.c
	src/game/objects/traps/movable_block.c
	src/game/objects/traps/pendulum.c
	src/game/objects/traps/rolling_ball.c
	src/game/objects/traps/rolling_block.c
	src/game/objects/traps/spikes.c
	src/game/objects/traps/teeth_trap.c
	src/game/objects/traps/thors_hammer.c
	src/game/option/option.c
	src/game/option/option_compass.c
	src/game/option/option_control.c
	src/game/option/option_control_pick.c
	src/game/option/option_graphics.c
	src/game/option/option_passport.c
	src/game/option/option_sound.c
	src/game/output.c
	src/game/overlay.c
	src/game/picture.c
	src/game/random.c
	src/game/requester.c
	src/game/room.c
	src/game/room_draw.c
	src/game/savegame/savegame.c
	src/game/savegame/savegame_bson.c
	src/game/savegame/savegame_legacy.c
	src/game/screen.c
	src/game/setup.c
	src/game/shell.c
	src/game/sound.c
	src/game/stats.c
	src/game/text.c
	src/game/viewport.c
	src/gfx/2d/2d_renderer.c
	src/gfx/2d/2d_surface.c
	src/gfx/3d/3d_renderer.c
	src/gfx/3d/vertex_stream.c
	src/gfx/blitter.c
	src/gfx/context.c
	src/gfx/gl/buffer.c
	src/gfx/gl/gl_core_3_3.c
	src/gfx/gl/program.c
	src/gfx/gl/sampler.c
	src/gfx/gl/texture.c
	src/gfx/gl/utils.c
	src/gfx/gl/vertex_array.c
	src/gfx/screenshot.c
	src/global/vars.c
	src/init.c
	src/json/bson_parse.c
	src/json/bson_write.c
	src/json/json_base.c
	src/json/json_parse.c
	src/json/json_write.c
	src/log.c
	src/math/math.c
	src/math/math_misc.c
	src/math/matrix.c
	src/memory.c
	src/specific/s_audio.c
	src/specific/s_audio_sample.c
	src/specific/s_audio_stream.c
	src/specific/s_clock.c
	src/specific/s_filesystem.c
	src/specific/s_fmv.c
	src/specific/s_input.c
	src/specific/s_output.c
	src/specific/s_picture.c
	src/specific/s_shell.c
)

if (WIN32)
	target_compile_definitions(Tomb1Main
	PUBLIC main=SDL_main
)
endif()

if (WIN32)
	target_compile_definitions(Tomb1Main
 	PUBLIC _CRT_SECURE_NO_WARNINGS)
endif()

target_include_directories(Tomb1Main
	PRIVATE
	${CMAKE_SOURCE_DIR}/src
	${FFMPEG_INCLUDE_DIRS}
	${SDL2_INCLUDE_DIRS}
	${ZLIB_INCLUDE_DIRS}
)

target_link_libraries(Tomb1Main
	${SDL2_LIBRARIES}
	${ZLIB_LIBRARIES}
	${FFMPEG_LIBRARIES}
	${OPENGL_LIBRARY}
)

find_library(MATH_LIBRARY m)

if (MATH_LIBRARY)
	message(STATUS "Add math library ${MATH_LIBRARY}")
	target_link_libraries(Tomb1Main
		${MATH_LIBRARY}
	)
endif()
