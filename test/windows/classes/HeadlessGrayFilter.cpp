#include <HeadlessGrayFilter.h>

#include <java/awt/image/ImageFilter.h>
#include <javax/swing/GrayFilter.h>
#include <jcpp.h>

using $ImageFilter = ::java::awt::image::ImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GrayFilter = ::javax::swing::GrayFilter;

$MethodInfo _HeadlessGrayFilter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HeadlessGrayFilter::*)()>(&HeadlessGrayFilter::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&HeadlessGrayFilter::main))},
	{}
};

$ClassInfo _HeadlessGrayFilter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"HeadlessGrayFilter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_HeadlessGrayFilter_MethodInfo_
};

$Object* allocate$HeadlessGrayFilter($Class* clazz) {
	return $of($alloc(HeadlessGrayFilter));
}

void HeadlessGrayFilter::init$() {
}

void HeadlessGrayFilter::main($StringArray* args) {
	$$new($GrayFilter, true, 60)->clone();
}

HeadlessGrayFilter::HeadlessGrayFilter() {
}

$Class* HeadlessGrayFilter::load$($String* name, bool initialize) {
	$loadClass(HeadlessGrayFilter, name, initialize, &_HeadlessGrayFilter_ClassInfo_, allocate$HeadlessGrayFilter);
	return class$;
}

$Class* HeadlessGrayFilter::class$ = nullptr;