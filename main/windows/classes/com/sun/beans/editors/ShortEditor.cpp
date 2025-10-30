#include <com/sun/beans/editors/ShortEditor.h>

#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _ShortEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ShortEditor::*)()>(&ShortEditor::init$))},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _ShortEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.ShortEditor",
	"com.sun.beans.editors.NumberEditor",
	nullptr,
	nullptr,
	_ShortEditor_MethodInfo_
};

$Object* allocate$ShortEditor($Class* clazz) {
	return $of($alloc(ShortEditor));
}

void ShortEditor::init$() {
	$NumberEditor::init$();
}

$String* ShortEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({"((short)"_s, value, ")"_s}) : "null"_s;
}

void ShortEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Short*)nullptr : $($Short::decode(text)));
}

ShortEditor::ShortEditor() {
}

$Class* ShortEditor::load$($String* name, bool initialize) {
	$loadClass(ShortEditor, name, initialize, &_ShortEditor_ClassInfo_, allocate$ShortEditor);
	return class$;
}

$Class* ShortEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com