#include <java/awt/PrintJob.h>

#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace awt {

$NamedAttribute PrintJob_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _PrintJob_MethodAnnotations_finalize2[] = {
	{"Ljava/lang/Deprecated;", PrintJob_Attribute_var$0},
	{}
};

$MethodInfo _PrintJob_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(PrintJob::*)()>(&PrintJob::init$))},
	{"end", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"finalize", "()V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _PrintJob_MethodAnnotations_finalize2},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPageDimension", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPageResolution", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"lastPageFirst", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PrintJob_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.awt.PrintJob",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PrintJob_MethodInfo_
};

$Object* allocate$PrintJob($Class* clazz) {
	return $of($alloc(PrintJob));
}

void PrintJob::init$() {
}

void PrintJob::finalize() {
	end();
}

PrintJob::PrintJob() {
}

$Class* PrintJob::load$($String* name, bool initialize) {
	$loadClass(PrintJob, name, initialize, &_PrintJob_ClassInfo_, allocate$PrintJob);
	return class$;
}

$Class* PrintJob::class$ = nullptr;

	} // awt
} // java