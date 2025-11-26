#ifndef _javax_swing_text_JTextComponent$AccessibleJTextComponent$2_h_
#define _javax_swing_text_JTextComponent$AccessibleJTextComponent$2_h_
//$ class javax.swing.text.JTextComponent$AccessibleJTextComponent$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent$AccessibleJTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$AccessibleJTextComponent$2 : public ::java::lang::Runnable {
	$class(JTextComponent$AccessibleJTextComponent$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JTextComponent$AccessibleJTextComponent$2();
	void init$(::javax::swing::text::JTextComponent$AccessibleJTextComponent* this$1, ::java::lang::Integer* val$pos);
	virtual void run() override;
	::javax::swing::text::JTextComponent$AccessibleJTextComponent* this$1 = nullptr;
	::java::lang::Integer* val$pos = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$AccessibleJTextComponent$2_h_