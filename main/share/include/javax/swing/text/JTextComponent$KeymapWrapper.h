#ifndef _javax_swing_text_JTextComponent$KeymapWrapper_h_
#define _javax_swing_text_JTextComponent$KeymapWrapper_h_
//$ class javax.swing.text.JTextComponent$KeymapWrapper
//$ extends javax.swing.InputMap

#include <java/lang/Array.h>
#include <javax/swing/InputMap.h>

namespace javax {
	namespace swing {
		class KeyStroke;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class Keymap;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import JTextComponent$KeymapWrapper : public ::javax::swing::InputMap {
	$class(JTextComponent$KeymapWrapper, 0, ::javax::swing::InputMap)
public:
	JTextComponent$KeymapWrapper();
	void init$(::javax::swing::text::Keymap* keymap);
	virtual $Object* get(::javax::swing::KeyStroke* keyStroke) override;
	virtual $Array<::javax::swing::KeyStroke>* keys() override;
	virtual int32_t size() override;
	static $Object* DefaultActionKey;
	::javax::swing::text::Keymap* keymap = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$KeymapWrapper_h_