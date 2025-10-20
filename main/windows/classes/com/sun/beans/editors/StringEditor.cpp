#include <com/sun/beans/editors/StringEditor.h>

#include <java/beans/PropertyEditorSupport.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyEditorSupport = ::java::beans::PropertyEditorSupport;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

$MethodInfo _StringEditor_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StringEditor::*)()>(&StringEditor::init$))},
	{"getJavaInitializationString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAsText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _StringEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.beans.editors.StringEditor",
	"java.beans.PropertyEditorSupport",
	nullptr,
	nullptr,
	_StringEditor_MethodInfo_
};

$Object* allocate$StringEditor($Class* clazz) {
	return $of($alloc(StringEditor));
}

void StringEditor::init$() {
	$PropertyEditorSupport::init$();
}

$String* StringEditor::getJavaInitializationString() {
	$useLocalCurrentObjectStackCache();
	$var($Object, value, getValue());
	if (value == nullptr) {
		return "null"_s;
	}
	$var($String, str, $nc($of(value))->toString());
	int32_t length = $nc(str)->length();
	$var($StringBuilder, sb, $new($StringBuilder, length + 2));
	sb->append(u'\"');
	for (int32_t i = 0; i < length; ++i) {
		char16_t ch = str->charAt(i);
		switch (ch) {
		case u'\b':
			{
				sb->append("\\b"_s);
				break;
			}
		case u'\t':
			{
				sb->append("\\t"_s);
				break;
			}
		case u'\n':
			{
				sb->append("\\n"_s);
				break;
			}
		case u'\f':
			{
				sb->append("\\f"_s);
				break;
			}
		case u'\r':
			{
				sb->append("\\r"_s);
				break;
			}
		case u'\"':
			{
				sb->append("\\\""_s);
				break;
			}
		case u'\\':
			{
				sb->append("\\\\"_s);
				break;
			}
		default:
			{
				if ((ch < u' ') || (ch > u'~')) {
					sb->append("\\u"_s);
					$var($String, hex, $Integer::toHexString((int32_t)ch));
					for (int32_t len = $nc(hex)->length(); len < 4; ++len) {
						sb->append(u'0');
					}
					sb->append(hex);
				} else {
					sb->append(ch);
				}
				break;
			}
		}
	}
	sb->append(u'\"');
	return sb->toString();
}

void StringEditor::setAsText($String* text) {
	setValue(text);
}

StringEditor::StringEditor() {
}

$Class* StringEditor::load$($String* name, bool initialize) {
	$loadClass(StringEditor, name, initialize, &_StringEditor_ClassInfo_, allocate$StringEditor);
	return class$;
}

$Class* StringEditor::class$ = nullptr;

			} // editors
		} // beans
	} // sun
} // com