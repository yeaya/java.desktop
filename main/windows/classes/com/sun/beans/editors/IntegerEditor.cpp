#include <com/sun/beans/editors/IntegerEditor.h>

#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _IntegerEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegerEditor::*)()>(&IntegerEditor::init$))},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _IntegerEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.IntegerEditor",
	"com.sun.beans.editors.NumberEditor",
	nullptr,
	nullptr,
	_IntegerEditor_MethodInfo_
};

$Object* allocate$IntegerEditor($Class* clazz) {
	return $of($alloc(IntegerEditor));
}

void IntegerEditor::init$() {
	$NumberEditor::init$();
}

void IntegerEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Integer*)nullptr : $($Integer::decode(text)));
}

IntegerEditor::IntegerEditor() {
}

$Class* IntegerEditor::load$($String* name, bool initialize) {
	$loadClass(IntegerEditor, name, initialize, &_IntegerEditor_ClassInfo_, allocate$IntegerEditor);
	return class$;
}

$Class* IntegerEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com