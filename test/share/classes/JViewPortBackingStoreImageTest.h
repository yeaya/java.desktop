#ifndef _JViewPortBackingStoreImageTest_h_
#define _JViewPortBackingStoreImageTest_h_
//$ class JViewPortBackingStoreImageTest
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INSTRUCTIONS")
#undef INSTRUCTIONS

class JViewPortBackingStoreImageTest$Paragraph;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace util {
		class HashMap;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JComponent;
		class JFrame;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultStyledDocument;
			class StyleContext;
		}
	}
}

class $export JViewPortBackingStoreImageTest : public ::java::lang::Object {
	$class(JViewPortBackingStoreImageTest, 0, ::java::lang::Object)
public:
	JViewPortBackingStoreImageTest();
	void init$();
	static void addParagraph(::JViewPortBackingStoreImageTest$Paragraph* p);
	static ::javax::swing::JComponent* createComponent();
	static void createStyles();
	static void createUI();
	static void lambda$createUI$0(::javax::swing::JFrame* mainFrame, ::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $volatile(bool) testResult;
	static $volatile(::java::util::concurrent::CountDownLatch*) countDownLatch;
	static $String* INSTRUCTIONS;
	static ::javax::swing::text::DefaultStyledDocument* doc;
	static ::javax::swing::text::StyleContext* styles;
	static ::java::util::HashMap* contentAttributes;
	static $Array<JViewPortBackingStoreImageTest$Paragraph>* data;
};

#pragma pop_macro("INSTRUCTIONS")

#endif // _JViewPortBackingStoreImageTest_h_