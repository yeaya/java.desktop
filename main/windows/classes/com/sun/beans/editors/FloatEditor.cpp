#include <com/sun/beans/editors/FloatEditor.h>

#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _FloatEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FloatEditor::*)()>(&FloatEditor::init$))},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _FloatEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.FloatEditor",
	"com.sun.beans.editors.NumberEditor",
	nullptr,
	nullptr,
	_FloatEditor_MethodInfo_
};

$Object* allocate$FloatEditor($Class* clazz) {
	return $of($alloc(FloatEditor));
}

void FloatEditor::init$() {
	$NumberEditor::init$();
}

$String* FloatEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({value, "F"_s}) : "null"_s;
}

void FloatEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Float*)nullptr : $($Float::valueOf(text)));
}

FloatEditor::FloatEditor() {
}

$Class* FloatEditor::load$($String* name, bool initialize) {
	$loadClass(FloatEditor, name, initialize, &_FloatEditor_ClassInfo_, allocate$FloatEditor);
	return class$;
}

$Class* FloatEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com