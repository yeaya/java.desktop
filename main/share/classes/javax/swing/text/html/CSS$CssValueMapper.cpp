#include <javax/swing/text/html/CSS$CssValueMapper.h>

#include <java/util/Hashtable.h>
#include <javax/swing/text/html/CSS$CssValue.h>
#include <javax/swing/text/html/CSS.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $CSS = ::javax::swing::text::html::CSS;
using $CSS$CssValue = ::javax::swing::text::html::CSS$CssValue;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSS$CssValueMapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CSS$CssValueMapper::*)()>(&CSS$CssValueMapper::init$))},
	{"parseCssValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{"parseHtmlValue", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, 0},
	{}
};

$InnerClassInfo _CSS$CssValueMapper_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSS$CssValueMapper", "javax.swing.text.html.CSS", "CssValueMapper", $STATIC},
	{"javax.swing.text.html.CSS$CssValue", "javax.swing.text.html.CSS", "CssValue", $STATIC},
	{}
};

$ClassInfo _CSS$CssValueMapper_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CSS$CssValueMapper",
	"javax.swing.text.html.CSS$CssValue",
	nullptr,
	nullptr,
	_CSS$CssValueMapper_MethodInfo_,
	nullptr,
	nullptr,
	_CSS$CssValueMapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSS"
};

$Object* allocate$CSS$CssValueMapper($Class* clazz) {
	return $of($alloc(CSS$CssValueMapper));
}

void CSS$CssValueMapper::init$() {
	$CSS$CssValue::init$();
}

$Object* CSS$CssValueMapper::parseCssValue($String* value) {
	$useLocalCurrentObjectStackCache();
	$init($CSS);
	$var($Object, retValue, $nc($CSS::cssValueToInternalValueMap)->get(value));
	if (retValue == nullptr) {
		$assign(retValue, $nc($CSS::cssValueToInternalValueMap)->get($($nc(value)->toLowerCase())));
	}
	return $of(retValue);
}

$Object* CSS$CssValueMapper::parseHtmlValue($String* value) {
	$useLocalCurrentObjectStackCache();
	$init($CSS);
	$var($Object, retValue, $nc($CSS::htmlValueToCssValueMap)->get(value));
	if (retValue == nullptr) {
		$assign(retValue, $nc($CSS::htmlValueToCssValueMap)->get($($nc(value)->toLowerCase())));
	}
	return $of(retValue);
}

CSS$CssValueMapper::CSS$CssValueMapper() {
}

$Class* CSS$CssValueMapper::load$($String* name, bool initialize) {
	$loadClass(CSS$CssValueMapper, name, initialize, &_CSS$CssValueMapper_ClassInfo_, allocate$CSS$CssValueMapper);
	return class$;
}

$Class* CSS$CssValueMapper::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax