#include <com/sun/beans/editors/DoubleEditor.h>

#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _DoubleEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DoubleEditor::*)()>(&DoubleEditor::init$))},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _DoubleEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.DoubleEditor",
	"com.sun.beans.editors.NumberEditor",
	nullptr,
	nullptr,
	_DoubleEditor_MethodInfo_
};

$Object* allocate$DoubleEditor($Class* clazz) {
	return $of($alloc(DoubleEditor));
}

void DoubleEditor::init$() {
	$NumberEditor::init$();
}

void DoubleEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Double*)nullptr : $($Double::valueOf(text)));
}

DoubleEditor::DoubleEditor() {
}

$Class* DoubleEditor::load$($String* name, bool initialize) {
	$loadClass(DoubleEditor, name, initialize, &_DoubleEditor_ClassInfo_, allocate$DoubleEditor);
	return class$;
}

$Class* DoubleEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com