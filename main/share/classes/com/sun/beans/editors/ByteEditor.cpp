#include <com/sun/beans/editors/ByteEditor.h>

#include <com/sun/beans/editors/NumberEditor.h>
#include <java/beans/PropertyEditorSupport.h>
#include <jcpp.h>

using $NumberEditor = ::com::sun::beans::editors::NumberEditor;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _ByteEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ByteEditor::*)()>(&ByteEditor::init$))},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{}
};

$ClassInfo _ByteEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.ByteEditor",
	"com.sun.beans.editors.NumberEditor",
	nullptr,
	nullptr,
	_ByteEditor_MethodInfo_
};

$Object* allocate$ByteEditor($Class* clazz) {
	return $of($alloc(ByteEditor));
}

void ByteEditor::init$() {
	$NumberEditor::init$();
}

$String* ByteEditor::getJavaInitializationString() {
	$var($Object, value, getValue());
	return (value != nullptr) ? $str({"((byte)"_s, value, ")"_s}) : "null"_s;
}

void ByteEditor::setAsText($String* text) {
	setValue((text == nullptr) ? ($Byte*)nullptr : $($Byte::decode(text)));
}

ByteEditor::ByteEditor() {
}

$Class* ByteEditor::load$($String* name, bool initialize) {
	$loadClass(ByteEditor, name, initialize, &_ByteEditor_ClassInfo_, allocate$ByteEditor);
	return class$;
}

$Class* ByteEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com