#include <javax/swing/text/JTextComponent$KeyBinding.h>

#include <javax/swing/KeyStroke.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStroke = ::javax::swing::KeyStroke;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$KeyBinding_FieldInfo_[] = {
	{"key", "Ljavax/swing/KeyStroke;", nullptr, $PUBLIC, $field(JTextComponent$KeyBinding, key)},
	{"actionName", "Ljava/lang/String;", nullptr, $PUBLIC, $field(JTextComponent$KeyBinding, actionName)},
	{}
};

$MethodInfo _JTextComponent$KeyBinding_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/KeyStroke;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextComponent$KeyBinding::*)($KeyStroke*,$String*)>(&JTextComponent$KeyBinding::init$))},
	{}
};

$InnerClassInfo _JTextComponent$KeyBinding_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$KeyBinding", "javax.swing.text.JTextComponent", "KeyBinding", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JTextComponent$KeyBinding_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.JTextComponent$KeyBinding",
	"java.lang.Object",
	nullptr,
	_JTextComponent$KeyBinding_FieldInfo_,
	_JTextComponent$KeyBinding_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$KeyBinding_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$KeyBinding($Class* clazz) {
	return $of($alloc(JTextComponent$KeyBinding));
}

void JTextComponent$KeyBinding::init$($KeyStroke* key, $String* actionName) {
	$set(this, key, key);
	$set(this, actionName, actionName);
}

JTextComponent$KeyBinding::JTextComponent$KeyBinding() {
}

$Class* JTextComponent$KeyBinding::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$KeyBinding, name, initialize, &_JTextComponent$KeyBinding_ClassInfo_, allocate$JTextComponent$KeyBinding);
	return class$;
}

$Class* JTextComponent$KeyBinding::class$ = nullptr;

		} // text
	} // swing
} // javax