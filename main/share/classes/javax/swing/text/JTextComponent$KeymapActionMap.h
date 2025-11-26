#ifndef _javax_swing_text_JTextComponent$KeymapActionMap_h_
#define _javax_swing_text_JTextComponent$KeymapActionMap_h_
//$ class javax.swing.text.JTextComponent$KeymapActionMap
//$ extends javax.swing.ActionMap

#include <java/lang/Array.h>
#include <javax/swing/ActionMap.h>

namespace javax {
	namespace swing {
		class Action;
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

class $export JTextComponent$KeymapActionMap : public ::javax::swing::ActionMap {
	$class(JTextComponent$KeymapActionMap, $NO_CLASS_INIT, ::javax::swing::ActionMap)
public:
	JTextComponent$KeymapActionMap();
	void init$(::javax::swing::text::Keymap* keymap);
	virtual ::javax::swing::Action* get(Object$* key) override;
	virtual $ObjectArray* keys() override;
	virtual int32_t size() override;
	::javax::swing::text::Keymap* keymap = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$KeymapActionMap_h_