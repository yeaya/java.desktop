#include <javax/print/StreamPrintServiceFactory$Services.h>

#include <java/util/ArrayList.h>
#include <javax/print/StreamPrintServiceFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $StreamPrintServiceFactory = ::javax::print::StreamPrintServiceFactory;

namespace javax {
	namespace print {

$FieldInfo _StreamPrintServiceFactory$Services_FieldInfo_[] = {
	{"listOfFactories", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/print/StreamPrintServiceFactory;>;", $PRIVATE, $field(StreamPrintServiceFactory$Services, listOfFactories)},
	{}
};

$MethodInfo _StreamPrintServiceFactory$Services_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StreamPrintServiceFactory$Services::*)()>(&StreamPrintServiceFactory$Services::init$))},
	{}
};

$InnerClassInfo _StreamPrintServiceFactory$Services_InnerClassesInfo_[] = {
	{"javax.print.StreamPrintServiceFactory$Services", "javax.print.StreamPrintServiceFactory", "Services", $STATIC},
	{}
};

$ClassInfo _StreamPrintServiceFactory$Services_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.StreamPrintServiceFactory$Services",
	"java.lang.Object",
	nullptr,
	_StreamPrintServiceFactory$Services_FieldInfo_,
	_StreamPrintServiceFactory$Services_MethodInfo_,
	nullptr,
	nullptr,
	_StreamPrintServiceFactory$Services_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.StreamPrintServiceFactory"
};

$Object* allocate$StreamPrintServiceFactory$Services($Class* clazz) {
	return $of($alloc(StreamPrintServiceFactory$Services));
}

void StreamPrintServiceFactory$Services::init$() {
	$set(this, listOfFactories, nullptr);
}

StreamPrintServiceFactory$Services::StreamPrintServiceFactory$Services() {
}

$Class* StreamPrintServiceFactory$Services::load$($String* name, bool initialize) {
	$loadClass(StreamPrintServiceFactory$Services, name, initialize, &_StreamPrintServiceFactory$Services_ClassInfo_, allocate$StreamPrintServiceFactory$Services);
	return class$;
}

$Class* StreamPrintServiceFactory$Services::class$ = nullptr;

	} // print
} // javax