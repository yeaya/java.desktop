#include <javax/swing/text/html/ObjectView.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/ComponentView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef CLASSID

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $BeanInfo = ::java::beans::BeanInfo;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $ComponentView = ::javax::swing::text::ComponentView;
using $Element = ::javax::swing::text::Element;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _ObjectView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectView::*)($Element*)>(&ObjectView::init$))},
	{"createComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getUnloadableRepresentation", "()Ljava/awt/Component;", nullptr, 0},
	{"setParameters", "(Ljava/awt/Component;Ljavax/swing/text/AttributeSet;)V", nullptr, $PRIVATE, $method(static_cast<void(ObjectView::*)($Component*,$AttributeSet*)>(&ObjectView::setParameters))},
	{}
};

$ClassInfo _ObjectView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.ObjectView",
	"javax.swing.text.ComponentView",
	nullptr,
	nullptr,
	_ObjectView_MethodInfo_
};

$Object* allocate$ObjectView($Class* clazz) {
	return $of($alloc(ObjectView));
}

void ObjectView::init$($Element* elem) {
	$ComponentView::init$(elem);
}

$Component* ObjectView::createComponent() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($AttributeSet, attr, $nc($(getElement()))->getAttributes());
	$init($HTML$Attribute);
	$var($String, classname, $cast($String, $nc(attr)->getAttribute($HTML$Attribute::CLASSID)));
	try {
		$ReflectUtil::checkPackageAccess(classname);
		$Class* c = $Class::forName(classname, true, $($($Thread::currentThread())->getContextClassLoader()));
		$var($Object, o, $nc(c)->newInstance());
		if ($instanceOf($Component, o)) {
			$var($Component, comp, $cast($Component, o));
			setParameters(comp, attr);
			return comp;
		}
	} catch ($Throwable& e) {
	}
	return getUnloadableRepresentation();
}

$Component* ObjectView::getUnloadableRepresentation() {
	$var($Component, comp, $new($JLabel, "??"_s));
	$init($Color);
	comp->setForeground($Color::red);
	return comp;
}

void ObjectView::setParameters($Component* comp, $AttributeSet* attr) {
	$useLocalCurrentObjectStackCache();
	$Class* k = $nc($of(comp))->getClass();
	$var($BeanInfo, bi, nullptr);
	try {
		$assign(bi, $Introspector::getBeanInfo(k));
	} catch ($IntrospectionException& ex) {
		$nc($System::err)->println($$str({"introspector failed, ex: "_s, ex}));
		return;
	}
	$var($PropertyDescriptorArray, props, $nc(bi)->getPropertyDescriptors());
	for (int32_t i = 0; i < $nc(props)->length; ++i) {
		$var($Object, v, $nc(attr)->getAttribute($($nc(props->get(i))->getName())));
		if ($instanceOf($String, v)) {
			$var($String, value, $cast($String, v));
			$var($Method, writer, $nc(props->get(i))->getWriteMethod());
			if (writer == nullptr) {
				return;
			}
			$var($ClassArray, params, $nc(writer)->getParameterTypes());
			if ($nc(params)->length != 1) {
				return;
			}
			$var($ObjectArray, args, $new($ObjectArray, {$of(value)}));
			try {
				$MethodUtil::invoke(writer, comp, args);
			} catch ($Exception& ex) {
				$nc($System::err)->println("Invocation failed"_s);
			}
		}
	}
}

ObjectView::ObjectView() {
}

$Class* ObjectView::load$($String* name, bool initialize) {
	$loadClass(ObjectView, name, initialize, &_ObjectView_ClassInfo_, allocate$ObjectView);
	return class$;
}

$Class* ObjectView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax