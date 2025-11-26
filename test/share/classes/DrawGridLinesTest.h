#ifndef _DrawGridLinesTest_h_
#define _DrawGridLinesTest_h_
//$ class DrawGridLinesTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CELL_RENDERER_BACKGROUND_COLOR")
#undef CELL_RENDERER_BACKGROUND_COLOR
#pragma push_macro("GRID_COLOR")
#undef GRID_COLOR
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("SCALE")
#undef SCALE
#pragma push_macro("TABLE_BACKGROUND_COLOR")
#undef TABLE_BACKGROUND_COLOR
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Color;
	}
}
namespace javax {
	namespace swing {
		class JTable;
	}
}

class $export DrawGridLinesTest : public ::java::lang::Object {
	$class(DrawGridLinesTest, 0, ::java::lang::Object)
public:
	DrawGridLinesTest();
	void init$();
	static void checkTableGridLines();
	static void checkTableGridLines(::javax::swing::JTable* table);
	static void main($StringArray* args);
	static const int32_t WIDTH = 300;
	static const int32_t HEIGHT = 150;
	static ::java::awt::Color* GRID_COLOR;
	static ::java::awt::Color* TABLE_BACKGROUND_COLOR;
	static ::java::awt::Color* CELL_RENDERER_BACKGROUND_COLOR;
	static const int32_t SCALE = 2;
};

#pragma pop_macro("CELL_RENDERER_BACKGROUND_COLOR")
#pragma pop_macro("GRID_COLOR")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("SCALE")
#pragma pop_macro("TABLE_BACKGROUND_COLOR")
#pragma pop_macro("WIDTH")

#endif // _DrawGridLinesTest_h_