/* =========================================================================================

   This is an auto-generated file: Any edits you make may be overwritten!

*/

#pragma once

namespace BinaryData
{
    extern const char*   backgroundlabels_png;
    const int            backgroundlabels_pngSize = 537710;

    extern const char*   knob_png;
    const int            knob_pngSize = 62368;

    extern const char*   reverse_png;
    const int            reverse_pngSize = 2682;

    extern const char*   reversedown_png;
    const int            reversedown_pngSize = 4774;

    extern const char*   reverseover_png;
    const int            reverseover_pngSize = 2554;

    extern const char*   sync_png;
    const int            sync_pngSize = 999;

    extern const char*   syncdown_png;
    const int            syncdown_pngSize = 2810;

    extern const char*   syncover_png;
    const int            syncover_pngSize = 1094;

    extern const char*   phase_png;
    const int            phase_pngSize = 1872;

    extern const char*   phasedown_png;
    const int            phasedown_pngSize = 3341;

    extern const char*   phaseover_png;
    const int            phaseover_pngSize = 1839;

    extern const char*   backgrounds_png;
    const int            backgrounds_pngSize = 533387;

    // Number of elements in the namedResourceList and originalFileNames arrays.
    const int namedResourceListSize = 12;

    // Points to the start of a list of resource names.
    extern const char* namedResourceList[];

    // Points to the start of a list of resource filenames.
    extern const char* originalFilenames[];

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding data and its size (or a null pointer if the name isn't found).
    const char* getNamedResource (const char* resourceNameUTF8, int& dataSizeInBytes);

    // If you provide the name of one of the binary resource variables above, this function will
    // return the corresponding original, non-mangled filename (or a null pointer if the name isn't found).
    const char* getNamedResourceOriginalFilename (const char* resourceNameUTF8);
}
