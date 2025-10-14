#include <com/sun/beans/editors/NumberEditor.h>

#include <java/beans/PropertyEditorSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _NumberEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NumberEditor::*)()>(&NumberEditor::init$))},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NumberEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.beans.editors.NumberEditor",
	"java.beans.PropertyEditorSupport",
	nullptr,
	nullptr,
	_NumberEditor_MethodInfo_
};

$Object* allocate$NumberEditor($Class* clazz) {
	return $of($alloc(NumberEditor));
}

void NumberEditor::init$() {
	$PropertyEditorSupport::init$();
}

$String* NumberEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $nc($of(value))->toString() : "null"_s;
}

NumberEditor::NumberEditor() {
}

$Class* NumberEditor::load$($String* name, bool initialize) {
	$loadClass(NumberEditor, name, initialize, &_NumberEditor_ClassInfo_, allocate$NumberEditor);
	return class$;
}

$Class* NumberEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com