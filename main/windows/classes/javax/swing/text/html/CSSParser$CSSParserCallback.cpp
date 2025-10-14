#include <javax/swing/text/html/CSSParser$CSSParserCallback.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/CSSParser.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CSSParser = ::javax::swing::text::html::CSSParser;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CSSParser$CSSParserCallback_MethodInfo_[] = {
	{"endRule", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleImport", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleProperty", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleSelector", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"startRule", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _CSSParser$CSSParserCallback_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CSSParser$CSSParserCallback", "javax.swing.text.html.CSSParser", "CSSParserCallback", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _CSSParser$CSSParserCallback_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.html.CSSParser$CSSParserCallback",
	nullptr,
	nullptr,
	nullptr,
	_CSSParser$CSSParserCallback_MethodInfo_,
	nullptr,
	nullptr,
	_CSSParser$CSSParserCallback_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CSSParser"
};

$Object* allocate$CSSParser$CSSParserCallback($Class* clazz) {
	return $of($alloc(CSSParser$CSSParserCallback));
}

$Class* CSSParser$CSSParserCallback::load$($String* name, bool initialize) {
	$loadClass(CSSParser$CSSParserCallback, name, initialize, &_CSSParser$CSSParserCallback_ClassInfo_, allocate$CSSParser$CSSParserCallback);
	return class$;
}

$Class* CSSParser$CSSParserCallback::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax