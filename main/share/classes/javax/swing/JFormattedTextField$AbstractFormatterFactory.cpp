#include <javax/swing/JFormattedTextField$AbstractFormatterFactory.h>

#include <javax/swing/JFormattedTextField$AbstractFormatter.h>
#include <javax/swing/JFormattedTextField.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFormattedTextField = ::javax::swing::JFormattedTextField;
using $JFormattedTextField$AbstractFormatter = ::javax::swing::JFormattedTextField$AbstractFormatter;

namespace javax {
	namespace swing {

$MethodInfo _JFormattedTextField$AbstractFormatterFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(JFormattedTextField$AbstractFormatterFactory::*)()>(&JFormattedTextField$AbstractFormatterFactory::init$))},
	{"getFormatter", "(Ljavax/swing/JFormattedTextField;)Ljavax/swing/JFormattedTextField$AbstractFormatter;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _JFormattedTextField$AbstractFormatterFactory_InnerClassesInfo_[] = {
	{"javax.swing.JFormattedTextField$AbstractFormatterFactory", "javax.swing.JFormattedTextField", "AbstractFormatterFactory", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _JFormattedTextField$AbstractFormatterFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.JFormattedTextField$AbstractFormatterFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JFormattedTextField$AbstractFormatterFactory_MethodInfo_,
	nullptr,
	nullptr,
	_JFormattedTextField$AbstractFormatterFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFormattedTextField"
};

$Object* allocate$JFormattedTextField$AbstractFormatterFactory($Class* clazz) {
	return $of($alloc(JFormattedTextField$AbstractFormatterFactory));
}

void JFormattedTextField$AbstractFormatterFactory::init$() {
}

JFormattedTextField$AbstractFormatterFactory::JFormattedTextField$AbstractFormatterFactory() {
}

$Class* JFormattedTextField$AbstractFormatterFactory::load$($String* name, bool initialize) {
	$loadClass(JFormattedTextField$AbstractFormatterFactory, name, initialize, &_JFormattedTextField$AbstractFormatterFactory_ClassInfo_, allocate$JFormattedTextField$AbstractFormatterFactory);
	return class$;
}

$Class* JFormattedTextField$AbstractFormatterFactory::class$ = nullptr;

	} // swing
} // javax