#ifndef _RTFWriteParagraphAlignTest_h_
#define _RTFWriteParagraphAlignTest_h_
//$ class RTFWriteParagraphAlignTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("RTF_DATA")
#undef RTF_DATA

namespace java {
	namespace awt {
		class Robot;
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JTextPane;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Document;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {
				class RTFEditorKit;
			}
		}
	}
}

class $export RTFWriteParagraphAlignTest : public ::java::lang::Object {
	$class(RTFWriteParagraphAlignTest, 0, ::java::lang::Object)
public:
	RTFWriteParagraphAlignTest();
	void init$();
	static void lambda$main$0();
	static void lambda$main$1();
	static void lambda$test$2(int32_t align);
	static void lambda$test$3();
	static void lambda$test$4(::javax::swing::text::Document* d);
	static void lambda$test$5();
	static void main($StringArray* args);
	static void test(int32_t align);
	static $StringArray* RTF_DATA;
	static ::javax::swing::JFrame* frame;
	static ::javax::swing::JTextPane* jTextPane;
	static int32_t position1;
	static int32_t position2;
	static ::javax::swing::text::rtf::RTFEditorKit* rtfEditorKit;
	static ::java::awt::Robot* robot;
};

#pragma pop_macro("RTF_DATA")

#endif // _RTFWriteParagraphAlignTest_h_