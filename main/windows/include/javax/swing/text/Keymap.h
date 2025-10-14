#ifndef _javax_swing_text_Keymap_h_
#define _javax_swing_text_Keymap_h_
//$ interface javax.swing.text.Keymap
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace javax {
	namespace swing {
		class Action;
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import Keymap : public ::java::lang::Object {
	$interface(Keymap, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addActionForKeyStroke(::javax::swing::KeyStroke* key, ::javax::swing::Action* a) {}
	virtual ::javax::swing::Action* getAction(::javax::swing::KeyStroke* key) {return nullptr;}
	virtual $Array<::javax::swing::Action>* getBoundActions() {return nullptr;}
	virtual $Array<::javax::swing::KeyStroke>* getBoundKeyStrokes() {return nullptr;}
	virtual ::javax::swing::Action* getDefaultAction() {return nullptr;}
	virtual $Array<::javax::swing::KeyStroke>* getKeyStrokesForAction(::javax::swing::Action* a) {return nullptr;}
	virtual $String* getName() {return nullptr;}
	virtual ::javax::swing::text::Keymap* getResolveParent() {return nullptr;}
	virtual bool isLocallyDefined(::javax::swing::KeyStroke* key) {return false;}
	virtual void removeBindings() {}
	virtual void removeKeyStrokeBinding(::javax::swing::KeyStroke* keys) {}
	virtual void setDefaultAction(::javax::swing::Action* a) {}
	virtual void setResolveParent(::javax::swing::text::Keymap* parent) {}
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_Keymap_h_