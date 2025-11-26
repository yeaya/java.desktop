#include <javax/swing/text/Keymap.h>

#include <javax/swing/Action.h>
#include <javax/swing/KeyStroke.h>
#include <jcpp.h>

using $ActionArray = $Array<::javax::swing::Action>;
using $KeyStrokeArray = $Array<::javax::swing::KeyStroke>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Action = ::javax::swing::Action;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Keymap_MethodInfo_[] = {
	{"addActionForKeyStroke", "(Ljavax/swing/KeyStroke;Ljavax/swing/Action;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getAction", "(Ljavax/swing/KeyStroke;)Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBoundActions", "()[Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBoundKeyStrokes", "()[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultAction", "()Ljavax/swing/Action;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKeyStrokesForAction", "(Ljavax/swing/Action;)[Ljavax/swing/KeyStroke;", nullptr, $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getResolveParent", "()Ljavax/swing/text/Keymap;", nullptr, $PUBLIC | $ABSTRACT},
	{"isLocallyDefined", "(Ljavax/swing/KeyStroke;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeBindings", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeKeyStrokeBinding", "(Ljavax/swing/KeyStroke;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDefaultAction", "(Ljavax/swing/Action;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setResolveParent", "(Ljavax/swing/text/Keymap;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Keymap_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Keymap",
	nullptr,
	nullptr,
	nullptr,
	_Keymap_MethodInfo_
};

$Object* allocate$Keymap($Class* clazz) {
	return $of($alloc(Keymap));
}

$Class* Keymap::load$($String* name, bool initialize) {
	$loadClass(Keymap, name, initialize, &_Keymap_ClassInfo_, allocate$Keymap);
	return class$;
}

$Class* Keymap::class$ = nullptr;

		} // text
	} // swing
} // javax