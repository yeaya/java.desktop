#include <TextBeanProperty.h>

#include <java/beans/BeanInfo.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $BeanInfo = ::java::beans::BeanInfo;
using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextArea = ::javax::swing::JTextArea;
using $JTextField = ::javax::swing::JTextField;
using $JTextComponent = ::javax::swing::text::JTextComponent;

$MethodInfo _TextBeanProperty_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TextBeanProperty::*)()>(&TextBeanProperty::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&TextBeanProperty::main)), "java.lang.Exception"},
	{"test", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Class*)>(&TextBeanProperty::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _TextBeanProperty_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"TextBeanProperty",
	"java.lang.Object",
	nullptr,
	nullptr,
	_TextBeanProperty_MethodInfo_
};

$Object* allocate$TextBeanProperty($Class* clazz) {
	return $of($alloc(TextBeanProperty));
}

void TextBeanProperty::init$() {
}

void TextBeanProperty::main($StringArray* args) {
	$load($JTextComponent);
	test($JTextComponent::class$);
	$load($JTextField);
	test($JTextField::class$);
	$load($JTextArea);
	test($JTextArea::class$);
	$load($JPasswordField);
	test($JPasswordField::class$);
}

void TextBeanProperty::test($Class* beanClass) {
	$var($BeanInfo, info, $Introspector::getBeanInfo(beanClass));
	$var($PropertyDescriptorArray, pd, $nc(info)->getPropertyDescriptors());
	int32_t i = 0;
	for (i = 0; i < $nc(pd)->length; ++i) {
		if ($nc($($nc(pd->get(i))->getName()))->equals("text"_s)) {
			break;
		}
	}
	if ($nc($nc(pd)->get(i))->isBound()) {
		$init($System);
		$nc($System::err)->println($$str({"Property: "_s, pd->get(i)}));
		$throwNew($RuntimeException, "text property is flagged as bound"_s);
	}
}

TextBeanProperty::TextBeanProperty() {
}

$Class* TextBeanProperty::load$($String* name, bool initialize) {
	$loadClass(TextBeanProperty, name, initialize, &_TextBeanProperty_ClassInfo_, allocate$TextBeanProperty);
	return class$;
}

$Class* TextBeanProperty::class$ = nullptr;