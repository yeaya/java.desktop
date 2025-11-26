#include <javax/print/DocFlavor$SERVICE_FORMATTED.h>

#include <javax/print/DocFlavor.h>
#include <jcpp.h>

#undef PAGEABLE
#undef PRINTABLE
#undef RENDERABLE_IMAGE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocFlavor = ::javax::print::DocFlavor;

namespace javax {
	namespace print {

$FieldInfo _DocFlavor$SERVICE_FORMATTED_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor$SERVICE_FORMATTED, serialVersionUID)},
	{"RENDERABLE_IMAGE", "Ljavax/print/DocFlavor$SERVICE_FORMATTED;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$SERVICE_FORMATTED, RENDERABLE_IMAGE)},
	{"PRINTABLE", "Ljavax/print/DocFlavor$SERVICE_FORMATTED;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$SERVICE_FORMATTED, PRINTABLE)},
	{"PAGEABLE", "Ljavax/print/DocFlavor$SERVICE_FORMATTED;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor$SERVICE_FORMATTED, PAGEABLE)},
	{}
};

$MethodInfo _DocFlavor$SERVICE_FORMATTED_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor$SERVICE_FORMATTED::*)($String*)>(&DocFlavor$SERVICE_FORMATTED::init$))},
	{}
};

$InnerClassInfo _DocFlavor$SERVICE_FORMATTED_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$SERVICE_FORMATTED", "javax.print.DocFlavor", "SERVICE_FORMATTED", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor$SERVICE_FORMATTED_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor$SERVICE_FORMATTED",
	"javax.print.DocFlavor",
	nullptr,
	_DocFlavor$SERVICE_FORMATTED_FieldInfo_,
	_DocFlavor$SERVICE_FORMATTED_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor$SERVICE_FORMATTED_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.DocFlavor"
};

$Object* allocate$DocFlavor$SERVICE_FORMATTED($Class* clazz) {
	return $of($alloc(DocFlavor$SERVICE_FORMATTED));
}

DocFlavor$SERVICE_FORMATTED* DocFlavor$SERVICE_FORMATTED::RENDERABLE_IMAGE = nullptr;
DocFlavor$SERVICE_FORMATTED* DocFlavor$SERVICE_FORMATTED::PRINTABLE = nullptr;
DocFlavor$SERVICE_FORMATTED* DocFlavor$SERVICE_FORMATTED::PAGEABLE = nullptr;

void DocFlavor$SERVICE_FORMATTED::init$($String* className) {
	$DocFlavor::init$("application/x-java-jvm-local-objectref"_s, className);
}

void clinit$DocFlavor$SERVICE_FORMATTED($Class* class$) {
	$assignStatic(DocFlavor$SERVICE_FORMATTED::RENDERABLE_IMAGE, $new(DocFlavor$SERVICE_FORMATTED, "java.awt.image.renderable.RenderableImage"_s));
	$assignStatic(DocFlavor$SERVICE_FORMATTED::PRINTABLE, $new(DocFlavor$SERVICE_FORMATTED, "java.awt.print.Printable"_s));
	$assignStatic(DocFlavor$SERVICE_FORMATTED::PAGEABLE, $new(DocFlavor$SERVICE_FORMATTED, "java.awt.print.Pageable"_s));
}

DocFlavor$SERVICE_FORMATTED::DocFlavor$SERVICE_FORMATTED() {
}

$Class* DocFlavor$SERVICE_FORMATTED::load$($String* name, bool initialize) {
	$loadClass(DocFlavor$SERVICE_FORMATTED, name, initialize, &_DocFlavor$SERVICE_FORMATTED_ClassInfo_, clinit$DocFlavor$SERVICE_FORMATTED, allocate$DocFlavor$SERVICE_FORMATTED);
	return class$;
}

$Class* DocFlavor$SERVICE_FORMATTED::class$ = nullptr;

	} // print
} // javax