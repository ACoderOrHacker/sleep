set_xmakever("2.2.2")

set_project("sleep")
set_version("1.0.0")

includes("@builtin/xpack")

add_rules("mode.debug", "mode.release") -- debug mode and release mode
set_languages("c++14") -- set c++ standard

target("sleep")
    set_kind("binary")
    add_files("src/*.cpp")
target_end()

xpack("sleep")
    -- set formats
    set_formats("zip", "targz", "nsis")

    set_basename("sleep-$(version)-$(plat)-$(arch)")

    set_description("A Sleep tool")
    set_author("ACoderOrHacker")
    set_license("MIT")
    set_licensefile("LICENSE")
    set_title("Sleep")

    add_targets("sleep")
xpack_end()
