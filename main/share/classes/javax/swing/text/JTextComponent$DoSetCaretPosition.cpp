#include <javax/swing/text/JTextComponent$DoSetCaretPosition.h>

#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$DoSetCaretPosition_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/JTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$DoSetCaretPosition, this$0)},
	{"host", "Ljavax/swing/text/JTextComponent;", nullptr, 0, $field(JTextComponent$DoSetCaretPosition, host)},
	{"newPos", "Ljavax/swing/text/Position;", nullptr, 0, $field(JTextComponent$DoSetCaretPosition, newPos)},
	{}
};

$MethodInfo _JTextComponent$DoSetCaretPosition_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent;Ljavax/swing/text/JTextComponent;Ljavax/swing/text/Position;)V", nullptr, 0, $method(static_cast<void(JTextComponent$DoSetCaretPosition::*)($JTextComponent*,$JTextComponent*,$Position*)>(&JTextComponent$DoSetCaretPosition::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _JTextComponent$DoSetCaretPosition_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$DoSetCaretPosition", "javax.swing.text.JTextComponent", "DoSetCaretPosition", $PRIVATE},
	{}
};

$ClassInfo _JTextComponent$DoSetCaretPosition_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$DoSetCaretPosition",
	"java.lang.Object",
	"java.lang.Runnable",
	_JTextComponent$DoSetCaretPosition_FieldInfo_,
	_JTextComponent$DoSetCaretPosition_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$DoSetCaretPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$DoSetCaretPosition($Class* clazz) {
	return $of($alloc(JTextComponent$DoSetCaretPosition));
}

void JTextComponent$DoSetCaretPosition::init$($JTextComponent* this$0, $JTextComponent* host, $Position* newPos) {
	$set(this, this$0, this$0);
	$set(this, host, host);
	$set(this, newPos, newPos);
}

void JTextComponent$DoSetCaretPosition::run() {
	$nc(this->host)->setCaretPosition($nc(this->newPos)->getOffset());
}

JTextComponent$DoSetCaretPosition::JTextComponent$DoSetCaretPosition() {
}

$Class* JTextComponent$DoSetCaretPosition::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$DoSetCaretPosition, name, initialize, &_JTextComponent$DoSetCaretPosition_ClassInfo_, allocate$JTextComponent$DoSetCaretPosition);
	return class$;
}

$Class* JTextComponent$DoSetCaretPosition::class$ = nullptr;

		} // text
	} // swing
} // javax