#ifndef _javax_swing_text_JTextComponent$DefaultKeymap_h_
#define _javax_swing_text_JTextComponent$DefaultKeymap_h_
//$ class javax.swing.text.JTextComponent$DefaultKeymap
//$ extends javax.swing.text.Keymap

#include <java/lang/Array.h>
#include <javax/swing/text/Keymap.h>

namespace java {
	namespace util {
		class Hashtable;
	}
}
namespace javax {
	namespace swing {
		class Action;
		class KeyStroke;
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import JTextComponent$DefaultKeymap : public ::javax::swing::text::Keymap {
	$class(JTextComponent$DefaultKeymap, $NO_CLASS_INIT, ::javax::swing::text::Keymap)
public:
	JTextComponent$DefaultKeymap();
	void init$($String* nm, ::javax::swing::text::Keymap* parent);
	virtual void addActionForKeyStroke(::javax::swing::KeyStroke* key, ::javax::swing::Action* a) override;
	virtual ::javax::swing::Action* getAction(::javax::swing::KeyStroke* key) override;
	virtual $Array<::javax::swing::Action>* getBoundActions() override;
	virtual $Array<::javax::swing::KeyStroke>* getBoundKeyStrokes() override;
	virtual ::javax::swing::Action* getDefaultAction() override;
	virtual $Array<::javax::swing::KeyStroke>* getKeyStrokesForAction(::javax::swing::Action* a) override;
	virtual $String* getName() override;
	virtual ::javax::swing::text::Keymap* getResolveParent() override;
	virtual bool isLocallyDefined(::javax::swing::KeyStroke* key) override;
	virtual void removeBindings() override;
	virtual void removeKeyStrokeBinding(::javax::swing::KeyStroke* key) override;
	virtual void setDefaultAction(::javax::swing::Action* a) override;
	virtual void setResolveParent(::javax::swing::text::Keymap* parent) override;
	virtual $String* toString() override;
	$String* nm = nullptr;
	::javax::swing::text::Keymap* parent = nullptr;
	::java::util::Hashtable* bindings = nullptr;
	::javax::swing::Action* defaultAction = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$DefaultKeymap_h_