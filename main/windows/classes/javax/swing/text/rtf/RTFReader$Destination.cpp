#include <javax/swing/text/rtf/RTFReader$Destination.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <javax/swing/text/rtf/RTFReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Dictionary = ::java::util::Dictionary;
using $RTFReader = ::javax::swing::text::rtf::RTFReader;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$MethodInfo _RTFReader$Destination_MethodInfo_[] = {
	{"begingroup", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"endgroup", "(Ljava/util/Dictionary;)V", "(Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC | $ABSTRACT},
	{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _RTFReader$Destination_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _RTFReader$Destination_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"javax.swing.text.rtf.RTFReader$Destination",
	nullptr,
	nullptr,
	nullptr,
	_RTFReader$Destination_MethodInfo_,
	nullptr,
	nullptr,
	_RTFReader$Destination_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFReader"
};

$Object* allocate$RTFReader$Destination($Class* clazz) {
	return $of($alloc(RTFReader$Destination));
}

$Class* RTFReader$Destination::load$($String* name, bool initialize) {
	$loadClass(RTFReader$Destination, name, initialize, &_RTFReader$Destination_ClassInfo_, allocate$RTFReader$Destination);
	return class$;
}

$Class* RTFReader$Destination::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax