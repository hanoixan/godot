#ifndef GODOT_WINDOWS_DLL_IMPORTS_H
#define GODOT_WINDOWS_DLL_IMPORTS_H

#ifdef __cplusplus
extern "C" {
#endif

//#define GODOT_EMBED_IMPORT __declspec(dllimport)
#define GODOT_EMBED_IMPORT

typedef void* GodotEmbedContextHandle;

GODOT_EMBED_IMPORT GodotEmbedContextHandle godot_embed_startup(const char* pack_path);
GODOT_EMBED_IMPORT int godot_embed_pump(GodotEmbedContextHandle Handle);
GODOT_EMBED_IMPORT int godot_embed_shutdown(GodotEmbedContextHandle Handle);

#ifdef __cplusplus
}
#endif

#endif // GODOT_WINDOWS_DLL_IMPORTS_H
