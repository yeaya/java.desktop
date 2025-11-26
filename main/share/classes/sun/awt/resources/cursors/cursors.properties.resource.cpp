#include <sun/awt/resources/cursors/cursors.properties.resource.h>

namespace sun {
    namespace awt {
        namespace resources {
            namespace cursors {

const char cursors$properties$resource$data[] =
"Cursor.CopyDrop.32x32.File=CopyDrop32x32.gif\n"
"Cursor.CopyDrop.32x32.HotSpot=0,0\n"
"Cursor.CopyDrop.32x32.Name=CopyDrop32x32\n"
"Cursor.CopyNoDrop.32x32.File=invalid32x32.gif\n"
"Cursor.CopyNoDrop.32x32.HotSpot=6,2\n"
"Cursor.CopyNoDrop.32x32.Name=CopyNoDrop32x32\n"
"Cursor.Invalid.32x32.File=invalid32x32.gif\n"
"Cursor.Invalid.32x32.HotSpot=6,2\n"
"Cursor.Invalid.32x32.Name=Invalid32x32\n"
"Cursor.LinkDrop.32x32.File=LinkDrop32x32.gif\n"
"Cursor.LinkDrop.32x32.HotSpot=0,0\n"
"Cursor.LinkDrop.32x32.Name=LinkDrop32x32\n"
"Cursor.LinkNoDrop.32x32.File=invalid32x32.gif\n"
"Cursor.LinkNoDrop.32x32.HotSpot=6,2\n"
"Cursor.LinkNoDrop.32x32.Name=LinkNoDrop32x32\n"
"Cursor.MoveDrop.32x32.File=MoveDrop32x32.gif\n"
"Cursor.MoveDrop.32x32.HotSpot=0,0\n"
"Cursor.MoveDrop.32x32.Name=MoveDrop32x32\n"
"Cursor.MoveNoDrop.32x32.File=invalid32x32.gif\n"
"Cursor.MoveNoDrop.32x32.HotSpot=6,2\n"
"Cursor.MoveNoDrop.32x32.Name=MoveNoDrop32x32\n";

int8_t* cursors$properties$resource::get(int32_t& length) {
    length = sizeof(cursors$properties$resource$data) - 1;
    return (int8_t*)cursors$properties$resource$data;
}

            } // cursors
        } // resources
    } // awt
} // sun
