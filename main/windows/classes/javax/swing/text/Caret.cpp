#include <javax/swing/text/Caret.h>

#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$MethodInfo _Caret_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"deinstall", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"getBlinkRate", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getDot", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getMagicCaretPosition", "()Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMark", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"install", "(Ljavax/swing/text/JTextComponent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"isSelectionVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isVisible", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"moveDot", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBlinkRate", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDot", "(I)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setMagicCaretPosition", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSelectionVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Caret_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.text.Caret",
	nullptr,
	nullptr,
	nullptr,
	_Caret_MethodInfo_
};

$Object* allocate$Caret($Class* clazz) {
	return $of($alloc(Caret));
}

$Class* Caret::load$($String* name, bool initialize) {
	$loadClass(Caret, name, initialize, &_Caret_ClassInfo_, allocate$Caret);
	return class$;
}

$Class* Caret::class$ = nullptr;

		} // text
	} // swing
} // javax