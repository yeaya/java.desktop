#ifndef _ImageViewTest_h_
#define _ImageViewTest_h_
//$ class ImageViewTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ABSOLUTE_FILE_PATH")
#undef ABSOLUTE_FILE_PATH
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JEditorPane;
		class JFrame;
	}
}

class $export ImageViewTest : public ::java::lang::Object {
	$class(ImageViewTest, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ImageViewTest();
	void init$();
	static void lambda$main$2($Array<::javax::swing::JEditorPane>* editorPanes, $String* ABSOLUTE_FILE_PATH);
	static void lambda$test$0(::javax::swing::JEditorPane* editorPane, int32_t WIDTH, int32_t HEIGHT);
	static void lambda$test$1(::javax::swing::JEditorPane* editorPane, ::java::awt::Robot* r, int32_t WIDTH, int32_t HEIGHT);
	static void main($StringArray* args);
	static void test(::java::awt::Robot* r, ::javax::swing::JEditorPane* editorPane, int32_t WIDTH, int32_t HEIGHT);
	static ::javax::swing::JFrame* f;
};

#pragma pop_macro("ABSOLUTE_FILE_PATH")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("WIDTH")

#endif // _ImageViewTest_h_