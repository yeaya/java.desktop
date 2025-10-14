#include <bug8074956.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/html/parser/ContentModel.h>
#include <javax/swing/text/html/parser/DTD.h>
#include <javax/swing/text/html/parser/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ContentModel = ::javax::swing::text::html::parser::ContentModel;
using $DTD = ::javax::swing::text::html::parser::DTD;
using $Element = ::javax::swing::text::html::parser::Element;

$MethodInfo _bug8074956_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8074956::*)()>(&bug8074956::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8074956::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _bug8074956_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8074956",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8074956_MethodInfo_
};

$Object* allocate$bug8074956($Class* clazz) {
	return $of($alloc(bug8074956));
}

void bug8074956::init$() {
}

void bug8074956::main($StringArray* args) {
	$var($DTD, html32, $DTD::getDTD("html32"_s));
	$var($ContentModel, contentModel, $new($ContentModel, u'&', $$new($ContentModel)));
	$var($Element, elem1, $nc(html32)->getElement("html-element"_s));
	contentModel->first(elem1);
	$var($Element, elem2, html32->getElement("test-element"_s));
	contentModel->first(elem2);
}

bug8074956::bug8074956() {
}

$Class* bug8074956::load$($String* name, bool initialize) {
	$loadClass(bug8074956, name, initialize, &_bug8074956_ClassInfo_, allocate$bug8074956);
	return class$;
}

$Class* bug8074956::class$ = nullptr;