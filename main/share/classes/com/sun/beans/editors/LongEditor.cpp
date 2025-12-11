#include <com/sun/beans/editors/LongEditor.h>

#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _LongEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LongEditor::*)()>(&LongEditor::init$))},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _LongEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.LongEditor",
	"com.sun.beans.editors.NumberEditor",
	nullptr,
	nullptr,
	_LongEditor_MethodInfo_
};

$Object* allocate$LongEditor($Class* clazz) {
	return $of($alloc(LongEditor));
}

void LongEditor::init$() {
	$NumberEditor::init$();
}

$String* LongEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({value, "L"_s}) : "null"_s;
}

void LongEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Long*)nullptr : $($Long::decode(text)));
}

LongEditor::LongEditor() {
}

$Class* LongEditor::load$($String* name, bool initialize) {
	$loadClass(LongEditor, name, initialize, &_LongEditor_ClassInfo_, allocate$LongEditor);
	return class$;
}

$Class* LongEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com