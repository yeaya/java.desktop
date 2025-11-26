#ifndef _bug4449413_h_
#define _bug4449413_h_
//$ class bug4449413
//$ extends javax.swing.JFrame

#include <java/lang/Array.h>
#include <javax/swing/JFrame.h>

#pragma push_macro("INSTRUCTIONS")
#undef INSTRUCTIONS
#pragma push_macro("INSTRUCTIONS_ADDITIONS_METAL")
#undef INSTRUCTIONS_ADDITIONS_METAL

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
		}
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
		class AbstractButton;
		class JButton;
		class JPanel;
	}
}
namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {
				class MetalTheme;
			}
		}
	}
}

class $export bug4449413 : public ::javax::swing::JFrame {
	$class(bug4449413, 0, ::javax::swing::JFrame)
public:
	bug4449413();
	using ::javax::swing::JFrame::isFocusCycleRoot;
	using ::javax::swing::JFrame::add;
	using ::javax::swing::JFrame::getMousePosition;
	using ::javax::swing::JFrame::list;
	void init$();
	virtual void addComponentsToPane();
	void createAndShowGUI();
	static ::javax::swing::AbstractButton* createButton(int32_t enabled, int32_t type);
	virtual bool isMetalLookAndFeel();
	void lambda$addComponentsToPane$2(::javax::swing::JPanel* testedPanel, ::java::awt::event::ItemEvent* e);
	static void lambda$addComponentsToPane$3(::javax::swing::JButton* failButton, ::java::awt::event::ActionEvent* e);
	static void lambda$main$0();
	static void lambda$main$1();
	static void main($StringArray* args);
	using ::javax::swing::JFrame::remove;
	using ::javax::swing::JFrame::repaint;
	using ::javax::swing::JFrame::setCursor;
	using ::javax::swing::JFrame::show;
	static $String* INSTRUCTIONS;
	static $String* INSTRUCTIONS_ADDITIONS_METAL;
	static ::java::util::concurrent::CountDownLatch* latch;
	static $volatile(bool) failed;
	::javax::swing::plaf::metal::MetalTheme* defaultMetalTheme = nullptr;
	::javax::swing::plaf::metal::MetalTheme* oceanTheme = nullptr;
	static ::bug4449413* instance;
};

#pragma pop_macro("INSTRUCTIONS")
#pragma pop_macro("INSTRUCTIONS_ADDITIONS_METAL")

#endif // _bug4449413_h_