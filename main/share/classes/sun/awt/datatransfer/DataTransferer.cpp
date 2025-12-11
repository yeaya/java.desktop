#include <sun/awt/datatransfer/DataTransferer.h>

#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/FlavorMap.h>
#include <java/awt/datatransfer/FlavorTable.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/ColorModel.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRaster.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/File.h>
#include <java/io/FilePermission.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/SequenceInputStream.h>
#include <java/io/Serializable.h>
#include <java/io/StringReader.h>
#include <java/lang/CharSequence.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Modifier.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/security/ProtectionDomain.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap$SimpleEntry.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/Stack.h>
#include <java/util/TreeMap.h>
#include <java/util/function/Predicate.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/Stream.h>
#include <javax/imageio/ImageIO.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/ImageReader.h>
#include <javax/imageio/ImageTypeSpecifier.h>
#include <javax/imageio/ImageWriter.h>
#include <javax/imageio/spi/ImageWriterSpi.h>
#include <javax/imageio/stream/ImageInputStream.h>
#include <javax/imageio/stream/ImageOutputStream.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/datatransfer/DataTransferer$1.h>
#include <sun/awt/datatransfer/DataTransferer$2.h>
#include <sun/awt/datatransfer/DataTransferer$ReencodingInputStream.h>
#include <sun/awt/datatransfer/ToolkitThreadBlockedHandler.h>
#include <sun/awt/image/ImageRepresentation.h>
#include <sun/awt/image/ToolkitImage.h>
#include <sun/datatransfer/DataFlavorUtil$RMI.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef ALLBITS
#undef DATA_CONVERTER_KEY
#undef DEPLOYMENT_CACHE_PROPERTIES
#undef MAX_VALUE
#undef UTF_8

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $FileArray = $Array<::java::io::File>;
using $ConstructorArray = $Array<::java::lang::reflect::Constructor>;
using $URIArray = $Array<::java::net::URI>;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $FlavorMap = ::java::awt::datatransfer::FlavorMap;
using $FlavorTable = ::java::awt::datatransfer::FlavorTable;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ColorModel = ::java::awt::image::ColorModel;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRaster = ::java::awt::image::WritableRaster;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $File = ::java::io::File;
using $FilePermission = ::java::io::FilePermission;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $SequenceInputStream = ::java::io::SequenceInputStream;
using $Serializable = ::java::io::Serializable;
using $StringReader = ::java::io::StringReader;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Constructor = ::java::lang::reflect::Constructor;
using $Modifier = ::java::lang::reflect::Modifier;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractMap$SimpleEntry = ::java::util::AbstractMap$SimpleEntry;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NavigableMap = ::java::util::NavigableMap;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $Stack = ::java::util::Stack;
using $TreeMap = ::java::util::TreeMap;
using $Predicate = ::java::util::function::Predicate;
using $Supplier = ::java::util::function::Supplier;
using $Stream = ::java::util::stream::Stream;
using $ImageIO = ::javax::imageio::ImageIO;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $ImageReader = ::javax::imageio::ImageReader;
using $ImageTypeSpecifier = ::javax::imageio::ImageTypeSpecifier;
using $ImageWriter = ::javax::imageio::ImageWriter;
using $ImageWriterSpi = ::javax::imageio::spi::ImageWriterSpi;
using $ImageInputStream = ::javax::imageio::stream::ImageInputStream;
using $ImageOutputStream = ::javax::imageio::stream::ImageOutputStream;
using $AppContext = ::sun::awt::AppContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $SunToolkit = ::sun::awt::SunToolkit;
using $DataTransferer$1 = ::sun::awt::datatransfer::DataTransferer$1;
using $DataTransferer$2 = ::sun::awt::datatransfer::DataTransferer$2;
using $DataTransferer$ReencodingInputStream = ::sun::awt::datatransfer::DataTransferer$ReencodingInputStream;
using $ToolkitThreadBlockedHandler = ::sun::awt::datatransfer::ToolkitThreadBlockedHandler;
using $ImageRepresentation = ::sun::awt::image::ImageRepresentation;
using $ToolkitImage = ::sun::awt::image::ToolkitImage;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;
using $DataFlavorUtil$RMI = ::sun::datatransfer::DataFlavorUtil$RMI;

namespace sun {
	namespace awt {
		namespace datatransfer {

class DataTransferer$$Lambda$lambda$removeSuspectedData$0 : public $PrivilegedExceptionAction {
	$class(DataTransferer$$Lambda$lambda$removeSuspectedData$0, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(DataTransferer* inst, $String* str, $ProtectionDomain* userProtectionDomain) {
		$set(this, inst$, inst);
		$set(this, str, str);
		$set(this, userProtectionDomain, userProtectionDomain);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$removeSuspectedData$0(str, userProtectionDomain));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DataTransferer$$Lambda$lambda$removeSuspectedData$0>());
	}
	DataTransferer* inst$ = nullptr;
	$String* str = nullptr;
	$ProtectionDomain* userProtectionDomain = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DataTransferer$$Lambda$lambda$removeSuspectedData$0::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$removeSuspectedData$0, inst$)},
	{"str", "Ljava/lang/String;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$removeSuspectedData$0, str)},
	{"userProtectionDomain", "Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$removeSuspectedData$0, userProtectionDomain)},
	{}
};
$MethodInfo DataTransferer$$Lambda$lambda$removeSuspectedData$0::methodInfos[3] = {
	{"<init>", "(Lsun/awt/datatransfer/DataTransferer;Ljava/lang/String;Ljava/security/ProtectionDomain;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$$Lambda$lambda$removeSuspectedData$0::*)(DataTransferer*,$String*,$ProtectionDomain*)>(&DataTransferer$$Lambda$lambda$removeSuspectedData$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DataTransferer$$Lambda$lambda$removeSuspectedData$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.DataTransferer$$Lambda$lambda$removeSuspectedData$0",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* DataTransferer$$Lambda$lambda$removeSuspectedData$0::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$$Lambda$lambda$removeSuspectedData$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DataTransferer$$Lambda$lambda$removeSuspectedData$0::class$ = nullptr;

class DataTransferer$$Lambda$lambda$castToFiles$1$1 : public $PrivilegedExceptionAction {
	$class(DataTransferer$$Lambda$lambda$castToFiles$1$1, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(DataTransferer* inst, $List* files, $ProtectionDomain* userProtectionDomain) {
		$set(this, inst$, inst);
		$set(this, files, files);
		$set(this, userProtectionDomain, userProtectionDomain);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->lambda$castToFiles$1(files, userProtectionDomain));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DataTransferer$$Lambda$lambda$castToFiles$1$1>());
	}
	DataTransferer* inst$ = nullptr;
	$List* files = nullptr;
	$ProtectionDomain* userProtectionDomain = nullptr;
	static $FieldInfo fieldInfos[4];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DataTransferer$$Lambda$lambda$castToFiles$1$1::fieldInfos[4] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$castToFiles$1$1, inst$)},
	{"files", "Ljava/util/List;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$castToFiles$1$1, files)},
	{"userProtectionDomain", "Ljava/security/ProtectionDomain;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$castToFiles$1$1, userProtectionDomain)},
	{}
};
$MethodInfo DataTransferer$$Lambda$lambda$castToFiles$1$1::methodInfos[3] = {
	{"<init>", "(Lsun/awt/datatransfer/DataTransferer;Ljava/util/List;Ljava/security/ProtectionDomain;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$$Lambda$lambda$castToFiles$1$1::*)(DataTransferer*,$List*,$ProtectionDomain*)>(&DataTransferer$$Lambda$lambda$castToFiles$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DataTransferer$$Lambda$lambda$castToFiles$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.DataTransferer$$Lambda$lambda$castToFiles$1$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	fieldInfos,
	methodInfos
};
$Class* DataTransferer$$Lambda$lambda$castToFiles$1$1::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$$Lambda$lambda$castToFiles$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DataTransferer$$Lambda$lambda$castToFiles$1$1::class$ = nullptr;

class DataTransferer$$Lambda$getConstructors$2 : public $PrivilegedAction {
	$class(DataTransferer$$Lambda$getConstructors$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $of($nc(inst$)->getConstructors());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DataTransferer$$Lambda$getConstructors$2>());
	}
	$Class* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DataTransferer$$Lambda$getConstructors$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$getConstructors$2, inst$)},
	{}
};
$MethodInfo DataTransferer$$Lambda$getConstructors$2::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$$Lambda$getConstructors$2::*)($Class*)>(&DataTransferer$$Lambda$getConstructors$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DataTransferer$$Lambda$getConstructors$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.DataTransferer$$Lambda$getConstructors$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* DataTransferer$$Lambda$getConstructors$2::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$$Lambda$getConstructors$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DataTransferer$$Lambda$getConstructors$2::class$ = nullptr;

class DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3 : public $Predicate {
	$class(DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* c) override {
		 return DataTransferer::lambda$constructFlavoredObject$2($cast($Constructor, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::*)()>(&DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::class$ = nullptr;

class DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4 : public $Predicate {
	$class(DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* clazz) {
		this->clazz = clazz;
	}
	virtual bool test(Object$* c) override {
		 return DataTransferer::lambda$constructFlavoredObject$3(clazz, $cast($Constructor, c));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4>());
	}
	$Class* clazz = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::fieldInfos[2] = {
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4, clazz)},
	{}
};
$MethodInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::*)($Class*)>(&DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::class$ = nullptr;

class DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5 : public $Supplier {
	$class(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5, $NO_CLASS_INIT, $Supplier)
public:
	void init$($Class* clazz, $Class* dfrc) {
		this->clazz = clazz;
		this->dfrc = dfrc;
	}
	virtual $Object* get() override {
		 return $of(DataTransferer::lambda$constructFlavoredObject$4(clazz, dfrc));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5>());
	}
	$Class* clazz = nullptr;
	$Class* dfrc = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::fieldInfos[3] = {
	{"clazz", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5, clazz)},
	{"dfrc", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5, dfrc)},
	{}
};
$MethodInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::*)($Class*,$Class*)>(&DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::init$))},
	{"get", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.awt.datatransfer.DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5",
	"java.lang.Object",
	"java.util.function.Supplier",
	fieldInfos,
	methodInfos
};
$Class* DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::load$($String* name, bool initialize) {
	$loadClass(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::class$ = nullptr;

$FieldInfo _DataTransferer_FieldInfo_[] = {
	{"javaTextEncodingFlavor", "Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DataTransferer, javaTextEncodingFlavor)},
	{"textNatives", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/Long;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, textNatives)},
	{"nativeCharsets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, nativeCharsets)},
	{"nativeEOLNs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, nativeEOLNs)},
	{"nativeTerminators", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Long;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, nativeTerminators)},
	{"DATA_CONVERTER_KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, DATA_CONVERTER_KEY)},
	{"DEPLOYMENT_CACHE_PROPERTIES", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, DEPLOYMENT_CACHE_PROPERTIES)},
	{"deploymentCacheDirectoryList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/io/File;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataTransferer, deploymentCacheDirectoryList)},
	{}
};

$MethodInfo _DataTransferer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DataTransferer::*)()>(&DataTransferer::init$))},
	{"adaptFlavorMap", "(Ljava/awt/datatransfer/FlavorMap;)Ljava/awt/datatransfer/FlavorTable;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FlavorTable*(*)($FlavorMap*)>(&DataTransferer::adaptFlavorMap))},
	{"castToFile", "(Ljava/lang/Object;)Ljava/io/File;", nullptr, $PRIVATE, $method(static_cast<$File*(DataTransferer::*)(Object$*)>(&DataTransferer::castToFile)), "java.io.IOException"},
	{"castToFiles", "(Ljava/util/List;Ljava/security/ProtectionDomain;)Ljava/util/ArrayList;", "(Ljava/util/List<*>;Ljava/security/ProtectionDomain;)Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $method(static_cast<$ArrayList*(DataTransferer::*)($List*,$ProtectionDomain*)>(&DataTransferer::castToFiles)), "java.io.IOException"},
	{"concatData", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DataTransferer::*)(Object$*,Object$*)>(&DataTransferer::concatData))},
	{"constructFlavoredObject", "(Ljava/lang/Object;Ljava/awt/datatransfer/DataFlavor;Ljava/lang/Class;)Ljava/lang/Object;", "(Ljava/lang/Object;Ljava/awt/datatransfer/DataFlavor;Ljava/lang/Class<*>;)Ljava/lang/Object;", $PRIVATE, $method(static_cast<$Object*(DataTransferer::*)(Object$*,$DataFlavor*,$Class*)>(&DataTransferer::constructFlavoredObject)), "java.io.IOException"},
	{"convertData", "(Ljava/lang/Object;Ljava/awt/datatransfer/Transferable;JLjava/util/Map;Z)[B", "(Ljava/lang/Object;Ljava/awt/datatransfer/Transferable;JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;Z)[B", $PUBLIC, nullptr, "java.io.IOException"},
	{"convertFileListToBytes", "(Ljava/util/ArrayList;)Ljava/io/ByteArrayOutputStream;", "(Ljava/util/ArrayList<Ljava/lang/String;>;)Ljava/io/ByteArrayOutputStream;", $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"convertObjectToBytes", "(Ljava/lang/Object;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(Object$*)>(&DataTransferer::convertObjectToBytes)), "java.io.IOException"},
	{"dragQueryFile", "([B)[Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"dragQueryURIs", "(Ljava/io/InputStream;JLjava/awt/datatransfer/Transferable;)[Ljava/net/URI;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getBestCharsetForTextFormat", "(Ljava/lang/Long;Ljava/awt/datatransfer/Transferable;)Ljava/lang/String;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"getCharsetForTextFormat", "(Ljava/lang/Long;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getDefaultUnicodeEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFlavorsForFormats", "([JLjava/awt/datatransfer/FlavorTable;)Ljava/util/Map;", "([JLjava/awt/datatransfer/FlavorTable;)Ljava/util/Map<Ljava/awt/datatransfer/DataFlavor;Ljava/lang/Long;>;", $PUBLIC},
	{"getFlavorsForFormatsAsArray", "([JLjava/awt/datatransfer/FlavorTable;)[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"getFlavorsForFormatsAsSet", "([JLjava/awt/datatransfer/FlavorTable;)Ljava/util/Set;", "([JLjava/awt/datatransfer/FlavorTable;)Ljava/util/Set<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getFormatForNativeAsLong", "(Ljava/lang/String;)Ljava/lang/Long;", nullptr, $PROTECTED | $ABSTRACT},
	{"getFormatsForFlavors", "([Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/FlavorTable;)Ljava/util/SortedMap;", "([Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/FlavorTable;)Ljava/util/SortedMap<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getFormatsForTransferable", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/FlavorTable;)Ljava/util/SortedMap;", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/FlavorTable;)Ljava/util/SortedMap<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getFormatsForTransferableAsArray", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/FlavorTable;)[J", nullptr, $PUBLIC},
	{"getInstance", "()Lsun/awt/datatransfer/DataTransferer;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<DataTransferer*(*)()>(&DataTransferer::getInstance))},
	{"getNativeForFormat", "(J)Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"getPlatformMappingsForFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet;", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/util/LinkedHashSet<Ljava/lang/String;>;", $PUBLIC},
	{"getPlatformMappingsForNative", "(Ljava/lang/String;)Ljava/util/LinkedHashSet;", "(Ljava/lang/String;)Ljava/util/LinkedHashSet<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC},
	{"getToolkitThreadBlockedHandler", "()Lsun/awt/datatransfer/ToolkitThreadBlockedHandler;", nullptr, $PUBLIC | $ABSTRACT},
	{"getUserProtectionDomain", "(Ljava/awt/datatransfer/Transferable;)Ljava/security/ProtectionDomain;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ProtectionDomain*(*)($Transferable*)>(&DataTransferer::getUserProtectionDomain))},
	{"imageToPlatformBytes", "(Ljava/awt/Image;J)[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"imageToStandardBytes", "(Ljava/awt/Image;Ljava/lang/String;)[B", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"imageToStandardBytesImpl", "(Ljava/awt/image/RenderedImage;Ljava/lang/String;)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"inputStreamToByteArray", "(Ljava/io/InputStream;)[B", nullptr, $PROTECTED | $STATIC, $method(static_cast<$bytes*(*)($InputStream*)>(&DataTransferer::inputStreamToByteArray)), "java.io.IOException"},
	{"isFileFormat", "(J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isFileInWebstartedCache", "(Ljava/io/File;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($File*)>(&DataTransferer::isFileInWebstartedCache))},
	{"isForbiddenToRead", "(Ljava/io/File;Ljava/security/ProtectionDomain;)Z", nullptr, $PRIVATE, $method(static_cast<bool(DataTransferer::*)($File*,$ProtectionDomain*)>(&DataTransferer::isForbiddenToRead))},
	{"isImageFormat", "(J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isLocaleDependentTextFormat", "(J)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isTextFormat", "(J)Z", nullptr, $PROTECTED},
	{"isURIListFormat", "(J)Z", nullptr, $PROTECTED},
	{"keysToLongArray", "(Ljava/util/SortedMap;)[J", "(Ljava/util/SortedMap<Ljava/lang/Long;*>;)[J", $PUBLIC | $STATIC, $method(static_cast<$longs*(*)($SortedMap*)>(&DataTransferer::keysToLongArray))},
	{"lambda$castToFiles$1", "(Ljava/util/List;Ljava/security/ProtectionDomain;)Ljava/util/ArrayList;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$ArrayList*(DataTransferer::*)($List*,$ProtectionDomain*)>(&DataTransferer::lambda$castToFiles$1)), "java.lang.Exception"},
	{"lambda$constructFlavoredObject$2", "(Ljava/lang/reflect/Constructor;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Constructor*)>(&DataTransferer::lambda$constructFlavoredObject$2))},
	{"lambda$constructFlavoredObject$3", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Class*,$Constructor*)>(&DataTransferer::lambda$constructFlavoredObject$3))},
	{"lambda$constructFlavoredObject$4", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/io/IOException;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$IOException*(*)($Class*,$Class*)>(&DataTransferer::lambda$constructFlavoredObject$4))},
	{"lambda$removeSuspectedData$0", "(Ljava/lang/String;Ljava/security/ProtectionDomain;)Ljava/lang/String;", nullptr, $PRIVATE | $SYNTHETIC, $method(static_cast<$String*(DataTransferer::*)($String*,$ProtectionDomain*)>(&DataTransferer::lambda$removeSuspectedData$0)), "java.lang.Exception"},
	{"platformImageBytesToImage", "([BJ)Ljava/awt/Image;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{"processDataConversionRequests", "()V", nullptr, $PUBLIC},
	{"registerTextFlavorProperties", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeSuspectedData", "(Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/Transferable;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DataTransferer::*)($DataFlavor*,$Transferable*,$String*)>(&DataTransferer::removeSuspectedData)), "java.io.IOException"},
	{"setToSortedDataFlavorArray", "(Ljava/util/Set;)[Ljava/awt/datatransfer/DataFlavor;", "(Ljava/util/Set<Ljava/awt/datatransfer/DataFlavor;>;)[Ljava/awt/datatransfer/DataFlavor;", $PUBLIC | $STATIC, $method(static_cast<$DataFlavorArray*(*)($Set*)>(&DataTransferer::setToSortedDataFlavorArray))},
	{"standardImageBytesToImage", "([BLjava/lang/String;)Ljava/awt/Image;", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"translateBytes", "([BLjava/awt/datatransfer/DataFlavor;JLjava/awt/datatransfer/Transferable;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"translateBytesToString", "([BJLjava/awt/datatransfer/Transferable;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DataTransferer::*)($bytes*,int64_t,$Transferable*)>(&DataTransferer::translateBytesToString)), "java.io.IOException"},
	{"translateStream", "(Ljava/io/InputStream;Ljava/awt/datatransfer/DataFlavor;JLjava/awt/datatransfer/Transferable;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"translateStreamToInputStream", "(Ljava/io/InputStream;Ljava/awt/datatransfer/DataFlavor;JLjava/awt/datatransfer/Transferable;)Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$Object*(DataTransferer::*)($InputStream*,$DataFlavor*,int64_t,$Transferable*)>(&DataTransferer::translateStreamToInputStream)), "java.io.IOException"},
	{"translateTransferable", "(Ljava/awt/datatransfer/Transferable;Ljava/awt/datatransfer/DataFlavor;J)[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"translateTransferableString", "(Ljava/lang/String;J)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(DataTransferer::*)($String*,int64_t)>(&DataTransferer::translateTransferableString)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DataTransferer_InnerClassesInfo_[] = {
	{"sun.awt.datatransfer.DataTransferer$ReencodingInputStream", "sun.awt.datatransfer.DataTransferer", "ReencodingInputStream", $PUBLIC},
	{"sun.awt.datatransfer.DataTransferer$2", nullptr, nullptr, 0},
	{"sun.awt.datatransfer.DataTransferer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DataTransferer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.datatransfer.DataTransferer",
	"java.lang.Object",
	nullptr,
	_DataTransferer_FieldInfo_,
	_DataTransferer_MethodInfo_,
	nullptr,
	nullptr,
	_DataTransferer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.datatransfer.DataTransferer$ReencodingInputStream,sun.awt.datatransfer.DataTransferer$2,sun.awt.datatransfer.DataTransferer$1"
};

$Object* allocate$DataTransferer($Class* clazz) {
	return $of($alloc(DataTransferer));
}

$DataFlavor* DataTransferer::javaTextEncodingFlavor = nullptr;
$Set* DataTransferer::textNatives = nullptr;
$Map* DataTransferer::nativeCharsets = nullptr;
$Map* DataTransferer::nativeEOLNs = nullptr;
$Map* DataTransferer::nativeTerminators = nullptr;
$String* DataTransferer::DATA_CONVERTER_KEY = nullptr;
$StringArray* DataTransferer::DEPLOYMENT_CACHE_PROPERTIES = nullptr;
$ArrayList* DataTransferer::deploymentCacheDirectoryList = nullptr;

void DataTransferer::init$() {
}

DataTransferer* DataTransferer::getInstance() {
	$load(DataTransferer);
	$synchronized(class$) {
		$init(DataTransferer);
		return $nc(($cast($ComponentFactory, $($Toolkit::getDefaultToolkit()))))->getDataTransferer();
	}
}

$FlavorTable* DataTransferer::adaptFlavorMap($FlavorMap* map) {
	$init(DataTransferer);
	if ($instanceOf($FlavorTable, map)) {
		return $cast($FlavorTable, map);
	}
	return $new($DataTransferer$1, map);
}

void DataTransferer::registerTextFlavorProperties($String* nat, $String* charset, $String* eoln, $String* terminators) {
	$useLocalCurrentObjectStackCache();
	$var($Long, format, getFormatForNativeAsLong(nat));
	$nc(DataTransferer::textNatives)->add(format);
	$nc(DataTransferer::nativeCharsets)->put(format, (charset != nullptr && charset->length() != 0) ? charset : $($nc($($Charset::defaultCharset()))->name()));
	bool var$0 = eoln != nullptr && eoln->length() != 0;
	if (var$0 && !eoln->equals("\n"_s)) {
		$nc(DataTransferer::nativeEOLNs)->put(format, eoln);
	}
	if (terminators != nullptr && terminators->length() != 0) {
		$var($Integer, iTerminators, $Integer::valueOf(terminators));
		if ($nc(iTerminators)->intValue() > 0) {
			$nc(DataTransferer::nativeTerminators)->put(format, iTerminators);
		}
	}
}

bool DataTransferer::isTextFormat(int64_t format) {
	return $nc(DataTransferer::textNatives)->contains($($Long::valueOf(format)));
}

$String* DataTransferer::getCharsetForTextFormat($Long* lFormat) {
	return $cast($String, $nc(DataTransferer::nativeCharsets)->get(lFormat));
}

bool DataTransferer::isURIListFormat(int64_t format) {
	return false;
}

$SortedMap* DataTransferer::getFormatsForTransferable($Transferable* contents, $FlavorTable* map) {
	$var($DataFlavorArray, flavors, $nc(contents)->getTransferDataFlavors());
	if (flavors == nullptr) {
		return $Collections::emptySortedMap();
	}
	return getFormatsForFlavors(flavors, map);
}

$SortedMap* DataTransferer::getFormatsForFlavors($DataFlavorArray* flavors, $FlavorTable* map) {
	$useLocalCurrentObjectStackCache();
	$var($Map, formatMap, $new($HashMap, $nc(flavors)->length));
	$var($Map, textPlainMap, $new($HashMap, $nc(flavors)->length));
	$var($Map, indexMap, $new($HashMap, $nc(flavors)->length));
	$var($Map, textPlainIndexMap, $new($HashMap, $nc(flavors)->length));
	int32_t currentIndex = 0;
	for (int32_t i = $nc(flavors)->length - 1; i >= 0; --i) {
		$var($DataFlavor, flavor, flavors->get(i));
		if (flavor == nullptr) {
			continue;
		}
		bool var$4 = $nc(flavor)->isFlavorTextType();
		bool var$3 = var$4 || $nc(flavor)->isFlavorJavaFileListType();
		bool var$2 = var$3 || $nc($DataFlavor::imageFlavor)->equals(flavor);
		bool var$1 = var$2 || $nc(flavor)->isRepresentationClassSerializable();
		bool var$0 = var$1 || $nc(flavor)->isRepresentationClassInputStream();
		if (var$0 || $nc(flavor)->isRepresentationClassRemote()) {
			$var($List, natives, $nc(map)->getNativesForFlavor(flavor));
			currentIndex += $nc(natives)->size();
			{
				$var($Iterator, i$, natives->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($String, aNative, $cast($String, i$->next()));
					{
						$var($Long, lFormat, getFormatForNativeAsLong(aNative));
						$var($Integer, index, $Integer::valueOf(currentIndex--));
						formatMap->put(lFormat, flavor);
						indexMap->put(lFormat, index);
						bool var$6 = "text"_s->equals($(flavor->getPrimaryType()));
						bool var$5 = (var$6 && "plain"_s->equals($(flavor->getSubType())));
						if (var$5 || flavor->equals($DataFlavor::stringFlavor)) {
							textPlainMap->put(lFormat, flavor);
							textPlainIndexMap->put(lFormat, index);
						}
					}
				}
			}
			currentIndex += natives->size();
		}
	}
	formatMap->putAll(textPlainMap);
	indexMap->putAll(textPlainIndexMap);
	$var($Comparator, comparator, $nc($($DataFlavorUtil::getIndexOrderComparator(indexMap)))->reversed());
	$var($SortedMap, sortedMap, $new($TreeMap, comparator));
	sortedMap->putAll(formatMap);
	return sortedMap;
}

$longs* DataTransferer::getFormatsForTransferableAsArray($Transferable* contents, $FlavorTable* map) {
	return keysToLongArray($(getFormatsForTransferable(contents, map)));
}

$Map* DataTransferer::getFlavorsForFormats($longs* formats, $FlavorTable* map) {
	$useLocalCurrentObjectStackCache();
	$var($Map, flavorMap, $new($HashMap, $nc(formats)->length));
	$var($Set, mappingSet, $new($HashSet, $nc(formats)->length));
	$var($Set, flavorSet, $new($HashSet, $nc(formats)->length));
	{
		$var($longs, arr$, formats);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t format = arr$->get(i$);
			{
				$var($String, nat, getNativeForFormat(format));
				$var($List, flavors, $nc(map)->getFlavorsForNative(nat));
				{
					$var($Iterator, i$, $nc(flavors)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DataFlavor, flavor, $cast($DataFlavor, i$->next()));
						{
							bool var$4 = $nc(flavor)->isFlavorTextType();
							bool var$3 = var$4 || $nc(flavor)->isFlavorJavaFileListType();
							bool var$2 = var$3 || $nc($DataFlavor::imageFlavor)->equals(flavor);
							bool var$1 = var$2 || $nc(flavor)->isRepresentationClassSerializable();
							bool var$0 = var$1 || $nc(flavor)->isRepresentationClassInputStream();
							if (var$0 || $nc(flavor)->isRepresentationClassRemote()) {
								$var($AbstractMap$SimpleEntry, mapping, $new($AbstractMap$SimpleEntry, $($Long::valueOf(format)), flavor));
								flavorMap->put(flavor, $($Long::valueOf(format)));
								mappingSet->add(mapping);
								flavorSet->add(flavor);
							}
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, flavorSet->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($DataFlavor, flavor, $cast($DataFlavor, i$->next()));
			{
				$var($List, natives, $nc(map)->getNativesForFlavor(flavor));
				{
					$var($Iterator, i$, $nc(natives)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, aNative, $cast($String, i$->next()));
						{
							$var($Long, lFormat, getFormatForNativeAsLong(aNative));
							if (mappingSet->contains($$new($AbstractMap$SimpleEntry, lFormat, flavor))) {
								flavorMap->put(flavor, lFormat);
								break;
							}
						}
					}
				}
			}
		}
	}
	return flavorMap;
}

$Set* DataTransferer::getFlavorsForFormatsAsSet($longs* formats, $FlavorTable* map) {
	$useLocalCurrentObjectStackCache();
	$var($Set, flavorSet, $new($HashSet, $nc(formats)->length));
	{
		$var($longs, arr$, formats);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t format = arr$->get(i$);
			{
				$var($List, flavors, $nc(map)->getFlavorsForNative($(getNativeForFormat(format))));
				{
					$var($Iterator, i$, $nc(flavors)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($DataFlavor, flavor, $cast($DataFlavor, i$->next()));
						{
							bool var$4 = $nc(flavor)->isFlavorTextType();
							bool var$3 = var$4 || $nc(flavor)->isFlavorJavaFileListType();
							bool var$2 = var$3 || $nc($DataFlavor::imageFlavor)->equals(flavor);
							bool var$1 = var$2 || $nc(flavor)->isRepresentationClassSerializable();
							bool var$0 = var$1 || $nc(flavor)->isRepresentationClassInputStream();
							if (var$0 || $nc(flavor)->isRepresentationClassRemote()) {
								flavorSet->add(flavor);
							}
						}
					}
				}
			}
		}
	}
	return flavorSet;
}

$DataFlavorArray* DataTransferer::getFlavorsForFormatsAsArray($longs* formats, $FlavorTable* map) {
	return setToSortedDataFlavorArray($(getFlavorsForFormatsAsSet(formats, map)));
}

$String* DataTransferer::getBestCharsetForTextFormat($Long* lFormat, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$var($String, charset, nullptr);
	bool var$0 = localeTransferable != nullptr && isLocaleDependentTextFormat($nc(lFormat)->longValue());
	if (var$0 && localeTransferable->isDataFlavorSupported(DataTransferer::javaTextEncodingFlavor)) {
		try {
			$var($bytes, charsetNameBytes, $cast($bytes, localeTransferable->getTransferData(DataTransferer::javaTextEncodingFlavor)));
			$init($StandardCharsets);
			$assign(charset, $new($String, charsetNameBytes, $StandardCharsets::UTF_8));
		} catch ($UnsupportedFlavorException& cannotHappen) {
		}
	} else {
		$assign(charset, getCharsetForTextFormat(lFormat));
	}
	if (charset == nullptr) {
		$assign(charset, $nc($($Charset::defaultCharset()))->name());
	}
	return charset;
}

$bytes* DataTransferer::translateTransferableString($String* str$renamed, int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($String, str, str$renamed);
	$var($Long, lFormat, $Long::valueOf(format));
	$var($String, charset, getBestCharsetForTextFormat(lFormat, nullptr));
	$var($String, eoln, $cast($String, $nc(DataTransferer::nativeEOLNs)->get(lFormat)));
	if (eoln != nullptr) {
		int32_t length = $nc(str)->length();
		$var($StringBuilder, buffer, $new($StringBuilder, length * 2));
		for (int32_t i = 0; i < length; ++i) {
			if (str->startsWith(eoln, i)) {
				buffer->append(eoln);
				i += eoln->length() - 1;
				continue;
			}
			char16_t c = str->charAt(i);
			if (c == u'\n') {
				buffer->append(eoln);
			} else {
				buffer->append(c);
			}
		}
		$assign(str, buffer->toString());
	}
	$var($bytes, bytes, $nc(str)->getBytes(charset));
	$var($Integer, terminators, $cast($Integer, $nc(DataTransferer::nativeTerminators)->get(lFormat)));
	if (terminators != nullptr) {
		int32_t numTerminators = terminators->intValue();
		$var($bytes, terminatedBytes, $new($bytes, bytes->length + numTerminators));
		$System::arraycopy(bytes, 0, terminatedBytes, 0, bytes->length);
		for (int32_t i = bytes->length; i < terminatedBytes->length; ++i) {
			terminatedBytes->set(i, (int8_t)0);
		}
		$assign(bytes, terminatedBytes);
	}
	return bytes;
}

$String* DataTransferer::translateBytesToString($bytes* bytes, int64_t format, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$var($Long, lFormat, $Long::valueOf(format));
	$var($String, charset, getBestCharsetForTextFormat(lFormat, localeTransferable));
	$var($String, eoln, $cast($String, $nc(DataTransferer::nativeEOLNs)->get(lFormat)));
	$var($Integer, terminators, $cast($Integer, $nc(DataTransferer::nativeTerminators)->get(lFormat)));
	int32_t count = 0;
	if (terminators != nullptr) {
		int32_t numTerminators = terminators->intValue();
		bool search$continue = false;
		bool search$break = false;
		for (count = 0; count < ($nc(bytes)->length - numTerminators + 1); count += numTerminators) {
			for (int32_t i = count; i < count + numTerminators; ++i) {
				if (bytes->get(i) != 0) {
					search$continue = true;
					break;
				}
			}
			if (search$continue) {
				search$continue = false;
				continue;
			}
			search$break = true;
			break;
		}
	} else {
		count = $nc(bytes)->length;
	}
	$var($String, converted, $new($String, bytes, 0, count, charset));
	if (eoln != nullptr) {
		$var($chars, buf, converted->toCharArray());
		$var($chars, eoln_arr, eoln->toCharArray());
		int32_t j = 0;
		bool match = false;
		for (int32_t i = 0; i < buf->length;) {
			if (i + eoln_arr->length > buf->length) {
				buf->set(j++, buf->get(i++));
				continue;
			}
			match = true;
			{
				int32_t k = 0;
				int32_t l = i;
				for (; k < eoln_arr->length; ++k, ++l) {
					if (eoln_arr->get(k) != buf->get(l)) {
						match = false;
						break;
					}
				}
			}
			if (match) {
				buf->set(j++, u'\n');
				i += eoln_arr->length;
			} else {
				buf->set(j++, buf->get(i++));
			}
		}
		$assign(converted, $new($String, buf, 0, j));
	}
	return converted;
}

$bytes* DataTransferer::translateTransferable($Transferable* contents, $DataFlavor* flavor, int64_t format) {
	$useLocalCurrentObjectStackCache();
	$var($Object, obj, nullptr);
	bool stringSelectionHack = false;
	try {
		$assign(obj, $nc(contents)->getTransferData(flavor));
		if (obj == nullptr) {
			return nullptr;
		}
		$init($DataFlavor);
		if ($nc(flavor)->equals($DataFlavor::plainTextFlavor) && !($instanceOf($InputStream, obj))) {
			$assign(obj, contents->getTransferData($DataFlavor::stringFlavor));
			if (obj == nullptr) {
				return nullptr;
			}
			stringSelectionHack = true;
		} else {
			stringSelectionHack = false;
		}
	} catch ($UnsupportedFlavorException& e) {
		$throwNew($IOException, $(e->getMessage()));
	}
	bool var$0 = stringSelectionHack;
	if (!var$0) {
		bool var$2 = $of($String::class$)->equals($nc(flavor)->getRepresentationClass());
		bool var$1 = var$2 && $DataFlavorUtil::isFlavorCharsetTextType(flavor);
		var$0 = (var$1 && isTextFormat(format));
	}
	if (var$0) {
		$var($String, str, removeSuspectedData(flavor, contents, $cast($String, obj)));
		return translateTransferableString(str, format);
	} else if ($nc(flavor)->isRepresentationClassReader()) {
		bool var$3 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
		if (!(var$3 && isTextFormat(format))) {
			$throwNew($IOException, "cannot transfer non-text data as Reader"_s);
		}
		$var($StringBuilder, buf, $new($StringBuilder));
		{
			$var($Reader, r, $cast($Reader, obj));
			{
				$var($Throwable, var$4, nullptr);
				try {
					try {
						int32_t c = 0;
						while ((c = $nc(r)->read()) != -1) {
							buf->append((char16_t)c);
						}
					} catch ($Throwable& t$) {
						if (r != nullptr) {
							try {
								r->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$5) {
					$assign(var$4, var$5);
				} /*finally*/ {
					if (r != nullptr) {
						r->close();
					}
				}
				if (var$4 != nullptr) {
					$throw(var$4);
				}
			}
		}
		return translateTransferableString($(buf->toString()), format);
	} else if (flavor->isRepresentationClassCharBuffer()) {
		bool var$6 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
		if (!(var$6 && isTextFormat(format))) {
			$throwNew($IOException, "cannot transfer non-text data as CharBuffer"_s);
		}
		$var($CharBuffer, buffer, $cast($CharBuffer, obj));
		int32_t size = $nc(buffer)->remaining();
		$var($chars, chars, $new($chars, size));
		buffer->get(chars, 0, size);
		return translateTransferableString($$new($String, chars), format);
	} else {
		$load($chars);
		if ($of($getClass($chars))->equals(flavor->getRepresentationClass())) {
			bool var$7 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
			if (!(var$7 && isTextFormat(format))) {
				$throwNew($IOException, "cannot transfer non-text data as char array"_s);
			}
			return translateTransferableString($$new($String, $cast($chars, obj)), format);
		} else if (flavor->isRepresentationClassByteBuffer()) {
			$var($ByteBuffer, buffer, $cast($ByteBuffer, obj));
			int32_t size = $nc(buffer)->remaining();
			$var($bytes, bytes, $new($bytes, size));
			buffer->get(bytes, 0, size);
			bool var$8 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
			if (var$8 && isTextFormat(format)) {
				$var($String, sourceEncoding, $DataFlavorUtil::getTextCharset(flavor));
				return translateTransferableString($$new($String, bytes, sourceEncoding), format);
			} else {
				return bytes;
			}
		} else {
			$load($bytes);
			if ($of($getClass($bytes))->equals(flavor->getRepresentationClass())) {
				$var($bytes, bytes, $cast($bytes, obj));
				bool var$9 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
				if (var$9 && isTextFormat(format)) {
					$var($String, sourceEncoding, $DataFlavorUtil::getTextCharset(flavor));
					return translateTransferableString($$new($String, bytes, sourceEncoding), format);
				} else {
					return bytes;
				}
			} else {
				$init($DataFlavor);
				if ($nc($DataFlavor::imageFlavor)->equals(flavor)) {
					if (!isImageFormat(format)) {
						$throwNew($IOException, "Data translation failed: not an image format"_s);
					}
					$var($Image, image, $cast($Image, obj));
					$var($bytes, bytes, imageToPlatformBytes(image, format));
					if (bytes == nullptr) {
						$throwNew($IOException, "Data translation failed: cannot convert java image to native format"_s);
					}
					return bytes;
				}
			}
		}
	}
	$var($bytes, theByteArray, nullptr);
	if (isFileFormat(format)) {
		$init($DataFlavor);
		if (!$nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
			$throwNew($IOException, "data translation failed"_s);
		}
		$var($List, list, $cast($List, obj));
		$var($ProtectionDomain, userProtectionDomain, getUserProtectionDomain(contents));
		$var($ArrayList, fileList, castToFiles(list, userProtectionDomain));
		{
			$var($ByteArrayOutputStream, bos, convertFileListToBytes(fileList));
			{
				$var($Throwable, var$10, nullptr);
				try {
					try {
						$assign(theByteArray, $nc(bos)->toByteArray());
					} catch ($Throwable& t$) {
						if (bos != nullptr) {
							try {
								bos->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
						}
						$throw(t$);
					}
				} catch ($Throwable& var$11) {
					$assign(var$10, var$11);
				} /*finally*/ {
					if (bos != nullptr) {
						bos->close();
					}
				}
				if (var$10 != nullptr) {
					$throw(var$10);
				}
			}
		}
	} else if (isURIListFormat(format)) {
		$init($DataFlavor);
		if (!$nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
			$throwNew($IOException, "data translation failed"_s);
		}
		$var($String, nat, getNativeForFormat(format));
		$var($String, targetCharset, nullptr);
		if (nat != nullptr) {
			try {
				$assign(targetCharset, $$new($DataFlavor, nat)->getParameter("charset"_s));
			} catch ($ClassNotFoundException& cnfe) {
				$throwNew($IOException, static_cast<$Throwable*>(cnfe));
			}
		}
		if (targetCharset == nullptr) {
			$assign(targetCharset, "UTF-8"_s);
		}
		$var($List, list, $cast($List, obj));
		$var($ProtectionDomain, userProtectionDomain, getUserProtectionDomain(contents));
		$var($ArrayList, fileList, castToFiles(list, userProtectionDomain));
		$var($ArrayList, uriList, $new($ArrayList, $nc(fileList)->size()));
		{
			$var($Iterator, i$, $nc(fileList)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, fileObject, $cast($String, i$->next()));
				{
					$var($URI, uri, $$new($File, fileObject)->toURI());
					try {
						$var($String, var$12, $nc(uri)->getScheme());
						$var($String, var$13, ""_s);
						$var($String, var$14, uri->getPath());
						uriList->add($($$new($URI, var$12, var$13, var$14, $(uri->getFragment()))->toString()));
					} catch ($URISyntaxException& uriSyntaxException) {
						$throwNew($IOException, static_cast<$Throwable*>(uriSyntaxException));
					}
				}
			}
		}
		$var($bytes, eoln, "\r\n"_s->getBytes(targetCharset));
		{
			$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$15, nullptr);
				try {
					try {
						{
							$var($Iterator, i$, uriList->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($String, uri, $cast($String, i$->next()));
								{
									$var($bytes, bytes, $nc(uri)->getBytes(targetCharset));
									bos->write(bytes, 0, bytes->length);
									bos->write(eoln, 0, eoln->length);
								}
							}
						}
						$assign(theByteArray, bos->toByteArray());
					} catch ($Throwable& t$) {
						try {
							bos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$16) {
					$assign(var$15, var$16);
				} /*finally*/ {
					bos->close();
				}
				if (var$15 != nullptr) {
					$throw(var$15);
				}
			}
		}
	} else if ($nc(flavor)->isRepresentationClassInputStream()) {
		if (!($instanceOf($InputStream, obj))) {
			return $new($bytes, 0);
		}
		{
			$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$17, nullptr);
				$var($bytes, var$19, nullptr);
				bool return$18 = false;
				try {
					try {
						{
							$var($InputStream, is, $cast($InputStream, obj));
							{
								$var($Throwable, var$20, nullptr);
								try {
									try {
										$nc(is)->mark($Integer::MAX_VALUE);
										is->transferTo(bos);
										is->reset();
									} catch ($Throwable& t$) {
										if (is != nullptr) {
											try {
												is->close();
											} catch ($Throwable& x2) {
												t$->addSuppressed(x2);
											}
										}
										$throw(t$);
									}
								} catch ($Throwable& var$21) {
									$assign(var$20, var$21);
								} /*finally*/ {
									if (is != nullptr) {
										is->close();
									}
								}
								if (var$20 != nullptr) {
									$throw(var$20);
								}
							}
						}
						bool var$22 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
						if (var$22 && isTextFormat(format)) {
							$var($bytes, bytes, bos->toByteArray());
							$var($String, sourceEncoding, $DataFlavorUtil::getTextCharset(flavor));
							$assign(var$19, translateTransferableString($$new($String, bytes, sourceEncoding), format));
							return$18 = true;
							goto $finally3;
						}
						$assign(theByteArray, bos->toByteArray());
					} catch ($Throwable& t$) {
						try {
							bos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$23) {
					$assign(var$17, var$23);
				} $finally3: {
					bos->close();
				}
				if (var$17 != nullptr) {
					$throw(var$17);
				}
				if (return$18) {
					return var$19;
				}
			}
		}
	} else if (flavor->isRepresentationClassRemote()) {
		$assign(theByteArray, convertObjectToBytes($($DataFlavorUtil$RMI::newMarshalledObject(obj))));
	} else if (flavor->isRepresentationClassSerializable()) {
		$assign(theByteArray, convertObjectToBytes(obj));
	} else {
		$throwNew($IOException, "data translation failed"_s);
	}
	return theByteArray;
}

$bytes* DataTransferer::convertObjectToBytes(Object$* object) {
	$init(DataTransferer);
	$useLocalCurrentObjectStackCache();
	{
		$var($ByteArrayOutputStream, bos, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($ObjectOutputStream, oos, $new($ObjectOutputStream, bos));
					{
						$var($Throwable, var$3, nullptr);
						$var($bytes, var$5, nullptr);
						bool return$4 = false;
						try {
							try {
								oos->writeObject(object);
								$assign(var$5, bos->toByteArray());
								return$4 = true;
								goto $finally1;
							} catch ($Throwable& t$) {
								try {
									oos->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$3, var$6);
						} $finally1: {
							oos->close();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
						if (return$4) {
							$assign(var$2, var$5);
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable& t$) {
					try {
						bos->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} $finally: {
				bos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$String* DataTransferer::removeSuspectedData($DataFlavor* flavor, $Transferable* contents, $String* str) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool var$0 = nullptr == $System::getSecurityManager();
	if (var$0 || !$nc(flavor)->isMimeTypeEqual("text/uri-list"_s)) {
		return str;
	}
	$var($ProtectionDomain, userProtectionDomain, getUserProtectionDomain(contents));
	try {
		return $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new(DataTransferer$$Lambda$lambda$removeSuspectedData$0, this, str, userProtectionDomain))));
	} catch ($PrivilegedActionException& pae) {
		$throwNew($IOException, $(pae->getMessage()), pae);
	}
	$shouldNotReachHere();
}

$ProtectionDomain* DataTransferer::getUserProtectionDomain($Transferable* contents) {
	$init(DataTransferer);
	return $nc($of(contents))->getClass()->getProtectionDomain();
}

bool DataTransferer::isForbiddenToRead($File* file, $ProtectionDomain* protectionDomain) {
	$useLocalCurrentObjectStackCache();
	if (nullptr == protectionDomain) {
		return false;
	}
	try {
		$var($FilePermission, filePermission, $new($FilePermission, $($nc(file)->getCanonicalPath()), "read, delete"_s));
		if ($nc(protectionDomain)->implies(filePermission)) {
			return false;
		}
	} catch ($IOException& e) {
	}
	return true;
}

$ArrayList* DataTransferer::castToFiles($List* files, $ProtectionDomain* userProtectionDomain) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $cast($ArrayList, $AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new(DataTransferer$$Lambda$lambda$castToFiles$1$1, this, files, userProtectionDomain))));
	} catch ($PrivilegedActionException& pae) {
		$throwNew($IOException, $(pae->getMessage()));
	}
	$shouldNotReachHere();
}

$File* DataTransferer::castToFile(Object$* fileObject) {
	$var($String, filePath, nullptr);
	if ($instanceOf($File, fileObject)) {
		$assign(filePath, $nc(($cast($File, fileObject)))->getCanonicalPath());
	} else if ($instanceOf($String, fileObject)) {
		$assign(filePath, $cast($String, fileObject));
	} else {
		return nullptr;
	}
	return $new($File, filePath);
}

bool DataTransferer::isFileInWebstartedCache($File* f) {
	$init(DataTransferer);
	$useLocalCurrentObjectStackCache();
	if ($nc(DataTransferer::deploymentCacheDirectoryList)->isEmpty()) {
		{
			$var($StringArray, arr$, DataTransferer::DEPLOYMENT_CACHE_PROPERTIES);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, cacheDirectoryProperty, arr$->get(i$));
				{
					$var($String, cacheDirectoryPath, $System::getProperty(cacheDirectoryProperty));
					if (cacheDirectoryPath != nullptr) {
						try {
							$var($File, cacheDirectory, ($$new($File, cacheDirectoryPath))->getCanonicalFile());
							if (cacheDirectory != nullptr) {
								$nc(DataTransferer::deploymentCacheDirectoryList)->add(cacheDirectory);
							}
						} catch ($IOException& ioe) {
						}
					}
				}
			}
		}
	}
	{
		$var($Iterator, i$, $nc(DataTransferer::deploymentCacheDirectoryList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($File, deploymentCacheDirectory, $cast($File, i$->next()));
			{
				{
					$var($File, dir, f);
					for (; dir != nullptr; $assign(dir, $nc(dir)->getParentFile())) {
						if (dir->equals(deploymentCacheDirectory)) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

$Object* DataTransferer::translateBytes($bytes* bytes$renamed, $DataFlavor* flavor, int64_t format, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, bytes$renamed);
	$var($Object, theObject, nullptr);
	if (isFileFormat(format)) {
		$init($DataFlavor);
		if (!$nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
			$throwNew($IOException, "data translation failed"_s);
		}
		$var($StringArray, filenames, dragQueryFile(bytes));
		if (filenames == nullptr) {
			return $of(nullptr);
		}
		$var($FileArray, files, $new($FileArray, $nc(filenames)->length));
		for (int32_t i = 0; i < filenames->length; ++i) {
			files->set(i, $$new($File, filenames->get(i)));
		}
		$assign(theObject, $Arrays::asList(files));
	} else {
		bool var$1 = isURIListFormat(format);
		$init($DataFlavor);
		if (var$1 && $nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
			{
				$var($ByteArrayInputStream, str, $new($ByteArrayInputStream, bytes));
				{
					$var($Throwable, var$2, nullptr);
					$var($Object, var$4, nullptr);
					bool return$3 = false;
					try {
						try {
							$var($URIArray, uris, dragQueryURIs(str, format, localeTransferable));
							if (uris == nullptr) {
								$assign(var$4, nullptr);
								return$3 = true;
								goto $finally;
							}
							$var($List, files, $new($ArrayList));
							{
								$var($URIArray, arr$, uris);
								int32_t len$ = $nc(arr$)->length;
								int32_t i$ = 0;
								for (; i$ < len$; ++i$) {
									$var($URI, uri, arr$->get(i$));
									{
										try {
											files->add($$new($File, uri));
										} catch ($IllegalArgumentException& illegalArg) {
										}
									}
								}
							}
							$assign(theObject, files);
						} catch ($Throwable& t$) {
							try {
								str->close();
							} catch ($Throwable& x2) {
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable& var$5) {
						$assign(var$2, var$5);
					} $finally: {
						str->close();
					}
					if (var$2 != nullptr) {
						$throw(var$2);
					}
					if (return$3) {
						return var$4;
					}
				}
			}
		} else {
			bool var$9 = $of($String::class$)->equals($nc(flavor)->getRepresentationClass());
			bool var$8 = var$9 && $DataFlavorUtil::isFlavorCharsetTextType(flavor);
			if (var$8 && isTextFormat(format)) {
				$assign(theObject, translateBytesToString(bytes, format, localeTransferable));
			} else if ($nc(flavor)->isRepresentationClassReader()) {
				{
					$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
					{
						$var($Throwable, var$10, nullptr);
						try {
							try {
								$assign(theObject, translateStream(bais, flavor, format, localeTransferable));
							} catch ($Throwable& t$) {
								try {
									bais->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$11) {
							$assign(var$10, var$11);
						} /*finally*/ {
							bais->close();
						}
						if (var$10 != nullptr) {
							$throw(var$10);
						}
					}
				}
			} else if (flavor->isRepresentationClassCharBuffer()) {
				bool var$12 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
				if (!(var$12 && isTextFormat(format))) {
					$throwNew($IOException, "cannot transfer non-text data as CharBuffer"_s);
				}
				$var($CharBuffer, buffer, $CharBuffer::wrap($(static_cast<$CharSequence*>(translateBytesToString(bytes, format, localeTransferable)))));
				$assign(theObject, constructFlavoredObject(buffer, flavor, $CharBuffer::class$));
			} else {
				$load($chars);
				if ($of($getClass($chars))->equals(flavor->getRepresentationClass())) {
					bool var$13 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
					if (!(var$13 && isTextFormat(format))) {
						$throwNew($IOException, "cannot transfer non-text data as char array"_s);
					}
					$assign(theObject, $nc($(translateBytesToString(bytes, format, localeTransferable)))->toCharArray());
				} else if (flavor->isRepresentationClassByteBuffer()) {
					bool var$14 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
					if (var$14 && isTextFormat(format)) {
						$assign(bytes, $nc($(translateBytesToString(bytes, format, localeTransferable)))->getBytes($($DataFlavorUtil::getTextCharset(flavor))));
					}
					$var($ByteBuffer, buffer, $ByteBuffer::wrap(bytes));
					$assign(theObject, constructFlavoredObject(buffer, flavor, $ByteBuffer::class$));
				} else {
					$load($bytes);
					if ($of($getClass($bytes))->equals(flavor->getRepresentationClass())) {
						bool var$15 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
						if (var$15 && isTextFormat(format)) {
							$assign(theObject, $nc($(translateBytesToString(bytes, format, localeTransferable)))->getBytes($($DataFlavorUtil::getTextCharset(flavor))));
						} else {
							$assign(theObject, bytes);
						}
					} else if (flavor->isRepresentationClassInputStream()) {
						{
							$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
							{
								$var($Throwable, var$16, nullptr);
								try {
									try {
										$assign(theObject, translateStream(bais, flavor, format, localeTransferable));
									} catch ($Throwable& t$) {
										try {
											bais->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
										$throw(t$);
									}
								} catch ($Throwable& var$17) {
									$assign(var$16, var$17);
								} /*finally*/ {
									bais->close();
								}
								if (var$16 != nullptr) {
									$throw(var$16);
								}
							}
						}
					} else if (flavor->isRepresentationClassRemote()) {
						try {
							$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
							{
								$var($Throwable, var$18, nullptr);
								try {
									try {
										$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
										{
											$var($Throwable, var$19, nullptr);
											try {
												try {
													$assign(theObject, $DataFlavorUtil$RMI::getMarshalledObject($(ois->readObject())));
												} catch ($Throwable& t$) {
													try {
														ois->close();
													} catch ($Throwable& x2) {
														t$->addSuppressed(x2);
													}
													$throw(t$);
												}
											} catch ($Throwable& var$20) {
												$assign(var$19, var$20);
											} /*finally*/ {
												ois->close();
											}
											if (var$19 != nullptr) {
												$throw(var$19);
											}
										}
									} catch ($Throwable& t$) {
										try {
											bais->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
										$throw(t$);
									}
								} catch ($Throwable& var$21) {
									$assign(var$18, var$21);
								} /*finally*/ {
									bais->close();
								}
								if (var$18 != nullptr) {
									$throw(var$18);
								}
							}
						} catch ($Exception& e) {
							$throwNew($IOException, $(e->getMessage()));
						}
					} else if (flavor->isRepresentationClassSerializable()) {
						{
							$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
							{
								$var($Throwable, var$22, nullptr);
								try {
									try {
										$assign(theObject, translateStream(bais, flavor, format, localeTransferable));
									} catch ($Throwable& t$) {
										try {
											bais->close();
										} catch ($Throwable& x2) {
											t$->addSuppressed(x2);
										}
										$throw(t$);
									}
								} catch ($Throwable& var$23) {
									$assign(var$22, var$23);
								} /*finally*/ {
									bais->close();
								}
								if (var$22 != nullptr) {
									$throw(var$22);
								}
							}
						}
					} else {
						if ($nc($DataFlavor::imageFlavor)->equals(flavor)) {
							if (!isImageFormat(format)) {
								$throwNew($IOException, "data translation failed"_s);
							}
							$assign(theObject, platformImageBytesToImage(bytes, format));
						}
					}
				}
			}
		}
	}
	if (theObject == nullptr) {
		$throwNew($IOException, "data translation failed"_s);
	}
	return $of(theObject);
}

$Object* DataTransferer::translateStream($InputStream* str, $DataFlavor* flavor, int64_t format, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$var($Object, theObject, nullptr);
	bool var$0 = isURIListFormat(format);
	$init($DataFlavor);
	if (var$0 && $nc($DataFlavor::javaFileListFlavor)->equals(flavor)) {
		$var($URIArray, uris, dragQueryURIs(str, format, localeTransferable));
		if (uris == nullptr) {
			return $of(nullptr);
		}
		$var($List, files, $new($ArrayList));
		{
			$var($URIArray, arr$, uris);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($URI, uri, arr$->get(i$));
				{
					try {
						files->add($$new($File, uri));
					} catch ($IllegalArgumentException& illegalArg) {
					}
				}
			}
		}
		$assign(theObject, files);
	} else {
		bool var$4 = $of($String::class$)->equals($nc(flavor)->getRepresentationClass());
		bool var$3 = var$4 && $DataFlavorUtil::isFlavorCharsetTextType(flavor);
		if (var$3 && isTextFormat(format)) {
			return $of(translateBytesToString($(inputStreamToByteArray(str)), format, localeTransferable));
		} else {
			if ($nc($DataFlavor::plainTextFlavor)->equals(flavor)) {
				$assign(theObject, $new($StringReader, $(translateBytesToString($(inputStreamToByteArray(str)), format, localeTransferable))));
			} else if ($nc(flavor)->isRepresentationClassInputStream()) {
				$assign(theObject, translateStreamToInputStream(str, flavor, format, localeTransferable));
			} else if (flavor->isRepresentationClassReader()) {
				bool var$5 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
				if (!(var$5 && isTextFormat(format))) {
					$throwNew($IOException, "cannot transfer non-text data as Reader"_s);
				}
				$var($InputStream, is, $cast($InputStream, translateStreamToInputStream(str, $DataFlavor::plainTextFlavor, format, localeTransferable)));
				$var($String, unicode, $DataFlavorUtil::getTextCharset($DataFlavor::plainTextFlavor));
				$var($Reader, reader, $new($InputStreamReader, is, unicode));
				$load($Reader);
				$assign(theObject, constructFlavoredObject(reader, flavor, $Reader::class$));
			} else {
				$load($bytes);
				if ($of($getClass($bytes))->equals(flavor->getRepresentationClass())) {
					bool var$6 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
					if (var$6 && isTextFormat(format)) {
						$assign(theObject, $nc($(translateBytesToString($(inputStreamToByteArray(str)), format, localeTransferable)))->getBytes($($DataFlavorUtil::getTextCharset(flavor))));
					} else {
						$assign(theObject, inputStreamToByteArray(str));
					}
				} else if (flavor->isRepresentationClassRemote()) {
					try {
						$var($ObjectInputStream, ois, $new($ObjectInputStream, str));
						{
							$var($Throwable, var$7, nullptr);
							try {
								try {
									$assign(theObject, $DataFlavorUtil$RMI::getMarshalledObject($(ois->readObject())));
								} catch ($Throwable& t$) {
									try {
										ois->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$8) {
								$assign(var$7, var$8);
							} /*finally*/ {
								ois->close();
							}
							if (var$7 != nullptr) {
								$throw(var$7);
							}
						}
					} catch ($Exception& e) {
						$throwNew($IOException, $(e->getMessage()));
					}
				} else if (flavor->isRepresentationClassSerializable()) {
					try {
						$var($ObjectInputStream, ois, $new($ObjectInputStream, str));
						{
							$var($Throwable, var$9, nullptr);
							try {
								try {
									$assign(theObject, ois->readObject());
								} catch ($Throwable& t$) {
									try {
										ois->close();
									} catch ($Throwable& x2) {
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable& var$10) {
								$assign(var$9, var$10);
							} /*finally*/ {
								ois->close();
							}
							if (var$9 != nullptr) {
								$throw(var$9);
							}
						}
					} catch ($Exception& e) {
						$throwNew($IOException, $(e->getMessage()));
					}
				} else {
					if ($nc($DataFlavor::imageFlavor)->equals(flavor)) {
						if (!isImageFormat(format)) {
							$throwNew($IOException, "data translation failed"_s);
						}
						$assign(theObject, platformImageBytesToImage($(inputStreamToByteArray(str)), format));
					}
				}
			}
		}
	}
	if (theObject == nullptr) {
		$throwNew($IOException, "data translation failed"_s);
	}
	return $of(theObject);
}

$Object* DataTransferer::translateStreamToInputStream($InputStream* str$renamed, $DataFlavor* flavor, int64_t format, $Transferable* localeTransferable) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, str, str$renamed);
	bool var$0 = $DataFlavorUtil::isFlavorCharsetTextType(flavor);
	if (var$0 && isTextFormat(format)) {
		$assign(str, $new($DataTransferer$ReencodingInputStream, this, str, format, $($DataFlavorUtil::getTextCharset(flavor)), localeTransferable));
	}
	$load($InputStream);
	return $of(constructFlavoredObject(str, flavor, $InputStream::class$));
}

$Object* DataTransferer::constructFlavoredObject(Object$* arg, $DataFlavor* flavor, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Class* dfrc = $nc(flavor)->getRepresentationClass();
	if ($nc($of(clazz))->equals(dfrc)) {
		return $of(arg);
	} else {
		$var($ConstructorArray, constructors, nullptr);
		try {
			$assign(constructors, $cast($ConstructorArray, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(DataTransferer$$Lambda$getConstructors$2, static_cast<$Class*>($nc(dfrc)))))));
		} catch ($SecurityException& se) {
			$throwNew($IOException, $(se->getMessage()));
		}
		$var($Constructor, constructor, $cast($Constructor, $nc($($nc($($nc($($nc($($Stream::of(constructors)))->filter(static_cast<$Predicate*>($$new(DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3)))))->filter(static_cast<$Predicate*>($$new(DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4, clazz)))))->findFirst()))->orElseThrow(static_cast<$Supplier*>($$new(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5, clazz, dfrc)))));
		try {
			return $of($nc(constructor)->newInstance($$new($ObjectArray, {arg})));
		} catch ($Exception& e) {
			$throwNew($IOException, $(e->getMessage()));
		}
	}
	$shouldNotReachHere();
}

$URIArray* DataTransferer::dragQueryURIs($InputStream* stream, int64_t format, $Transferable* localeTransferable) {
	$throwNew($IOException, static_cast<$Throwable*>($$new($UnsupportedOperationException, "not implemented on this platform"_s)));
	$shouldNotReachHere();
}

$Image* DataTransferer::standardImageBytesToImage($bytes* bytes, $String* mimeType) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, readerIterator, $ImageIO::getImageReadersByMIMEType(mimeType));
	if (!$nc(readerIterator)->hasNext()) {
		$throwNew($IOException, $$str({"No registered service provider can decode  an image from "_s, mimeType}));
	}
	$var($IOException, ioe, nullptr);
	while ($nc(readerIterator)->hasNext()) {
		$var($ImageReader, imageReader, $cast($ImageReader, readerIterator->next()));
		try {
			$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, bytes));
			{
				$var($Throwable, var$0, nullptr);
				$var($Image, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						{
							$var($Throwable, var$3, nullptr);
							$var($Image, var$5, nullptr);
							bool return$4 = false;
							try {
								$var($ImageInputStream, imageInputStream, $ImageIO::createImageInputStream(bais));
								{
									$var($Throwable, var$6, nullptr);
									$var($Image, var$8, nullptr);
									bool return$7 = false;
									try {
										try {
											$var($ImageReadParam, param, $nc(imageReader)->getDefaultReadParam());
											imageReader->setInput(imageInputStream, true, true);
											$var($BufferedImage, bufferedImage, imageReader->read(imageReader->getMinIndex(), param));
											if (bufferedImage != nullptr) {
												$assign(var$8, bufferedImage);
												return$7 = true;
												goto $finally2;
											}
										} catch ($Throwable& t$) {
											if (imageInputStream != nullptr) {
												try {
													imageInputStream->close();
												} catch ($Throwable& x2) {
													t$->addSuppressed(x2);
												}
											}
											$throw(t$);
										}
									} catch ($Throwable& var$9) {
										$assign(var$6, var$9);
									} $finally2: {
										if (imageInputStream != nullptr) {
											imageInputStream->close();
										}
									}
									if (var$6 != nullptr) {
										$throw(var$6);
									}
									if (return$7) {
										$assign(var$5, var$8);
										return$4 = true;
										goto $finally1;
									}
								}
							} catch ($Throwable& var$10) {
								$assign(var$3, var$10);
							} $finally1: {
								$nc(imageReader)->dispose();
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
							if (return$4) {
								$assign(var$2, var$5);
								return$1 = true;
								goto $finally;
							}
						}
					} catch ($Throwable& t$) {
						try {
							bais->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$11) {
					$assign(var$0, var$11);
				} $finally: {
					bais->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($IOException& e) {
			$assign(ioe, e);
			continue;
		}
	}
	if (ioe == nullptr) {
		$assign(ioe, $new($IOException, $$str({"Registered service providers failed to decode an image from "_s, mimeType})));
	}
	$throw(ioe);
	$shouldNotReachHere();
}

$bytes* DataTransferer::imageToStandardBytes($Image* image, $String* mimeType) {
	$useLocalCurrentObjectStackCache();
	$var($IOException, originalIOE, nullptr);
	$var($Iterator, writerIterator, $ImageIO::getImageWritersByMIMEType(mimeType));
	if (!$nc(writerIterator)->hasNext()) {
		$throwNew($IOException, $$str({"No registered service provider can encode  an image to "_s, mimeType}));
	}
	if ($instanceOf($RenderedImage, image)) {
		try {
			return imageToStandardBytesImpl($cast($RenderedImage, image), mimeType);
		} catch ($IOException& ioe) {
			$assign(originalIOE, ioe);
		}
	}
	int32_t width = 0;
	int32_t height = 0;
	if ($instanceOf($ToolkitImage, image)) {
		$var($ImageRepresentation, ir, $nc(($cast($ToolkitImage, image)))->getImageRep());
		$nc(ir)->reconstruct($ImageObserver::ALLBITS);
		width = ir->getWidth();
		height = ir->getHeight();
	} else {
		width = $nc(image)->getWidth(nullptr);
		height = image->getHeight(nullptr);
	}
	$var($ColorModel, model, $ColorModel::getRGBdefault());
	$var($WritableRaster, raster, $nc(model)->createCompatibleWritableRaster(width, height));
	$var($BufferedImage, bufferedImage, $new($BufferedImage, model, raster, model->isAlphaPremultiplied(), ($Hashtable*)nullptr));
	$var($Graphics, g, bufferedImage->getGraphics());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(g)->drawImage(image, 0, 0, width, height, nullptr);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(g)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	try {
		return imageToStandardBytesImpl(bufferedImage, mimeType);
	} catch ($IOException& ioe) {
		if (originalIOE != nullptr) {
			$throw(originalIOE);
		} else {
			$throw(ioe);
		}
	}
	$shouldNotReachHere();
}

$bytes* DataTransferer::imageToStandardBytesImpl($RenderedImage* renderedImage, $String* mimeType) {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, writerIterator, $ImageIO::getImageWritersByMIMEType(mimeType));
	$var($ImageTypeSpecifier, typeSpecifier, $new($ImageTypeSpecifier, renderedImage));
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($IOException, ioe, nullptr);
	while ($nc(writerIterator)->hasNext()) {
		$var($ImageWriter, imageWriter, $cast($ImageWriter, writerIterator->next()));
		$var($ImageWriterSpi, writerSpi, $nc(imageWriter)->getOriginatingProvider());
		if (!$nc(writerSpi)->canEncodeImage(typeSpecifier)) {
			continue;
		}
		try {
			{
				$var($ImageOutputStream, imageOutputStream, $ImageIO::createImageOutputStream(baos));
				{
					$var($Throwable, var$0, nullptr);
					try {
						try {
							imageWriter->setOutput(imageOutputStream);
							imageWriter->write(renderedImage);
							$nc(imageOutputStream)->flush();
						} catch ($Throwable& t$) {
							if (imageOutputStream != nullptr) {
								try {
									imageOutputStream->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
							}
							$throw(t$);
						}
					} catch ($Throwable& var$1) {
						$assign(var$0, var$1);
					} /*finally*/ {
						if (imageOutputStream != nullptr) {
							imageOutputStream->close();
						}
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
			}
		} catch ($IOException& e) {
			imageWriter->dispose();
			baos->reset();
			$assign(ioe, e);
			continue;
		}
		imageWriter->dispose();
		baos->close();
		return baos->toByteArray();
	}
	baos->close();
	if (ioe == nullptr) {
		$assign(ioe, $new($IOException, $$str({"Registered service providers failed to encode "_s, renderedImage, " to "_s, mimeType})));
	}
	$throw(ioe);
}

$Object* DataTransferer::concatData(Object$* obj1, Object$* obj2) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, str1, nullptr);
	$var($InputStream, str2, nullptr);
	if ($instanceOf($bytes, obj1)) {
		$var($bytes, arr1, $cast($bytes, obj1));
		if ($instanceOf($bytes, obj2)) {
			$var($bytes, arr2, $cast($bytes, obj2));
			$var($bytes, ret, $new($bytes, $nc(arr1)->length + $nc(arr2)->length));
			$System::arraycopy(arr1, 0, ret, 0, arr1->length);
			$System::arraycopy(arr2, 0, ret, arr1->length, arr2->length);
			return $of(ret);
		} else {
			$assign(str1, $new($ByteArrayInputStream, arr1));
			$assign(str2, $cast($InputStream, obj2));
		}
	} else {
		$assign(str1, $cast($InputStream, obj1));
		if ($instanceOf($bytes, obj2)) {
			$assign(str2, $new($ByteArrayInputStream, $cast($bytes, obj2)));
		} else {
			$assign(str2, $cast($InputStream, obj2));
		}
	}
	return $of($new($SequenceInputStream, str1, str2));
}

$bytes* DataTransferer::convertData(Object$* source, $Transferable* contents, int64_t format, $Map* formatMap, bool isToolkitThread) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, ret, nullptr);
	if (isToolkitThread) {
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Stack, stack, $new($Stack));
				$var($Runnable, dataConverter, $new($DataTransferer$2, this, formatMap, format, contents, stack));
				$var($AppContext, appContext, $SunToolkit::targetToAppContext(source));
				$nc($(getToolkitThreadBlockedHandler()))->lock();
				if (appContext != nullptr) {
					appContext->put(DataTransferer::DATA_CONVERTER_KEY, dataConverter);
				}
				$SunToolkit::executeOnEventHandlerThread(source, dataConverter);
				while (stack->empty()) {
					$nc($(getToolkitThreadBlockedHandler()))->enter();
				}
				if (appContext != nullptr) {
					appContext->remove(DataTransferer::DATA_CONVERTER_KEY);
				}
				$assign(ret, $cast($bytes, stack->pop()));
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($(getToolkitThreadBlockedHandler()))->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} else {
		$var($DataFlavor, flavor, $cast($DataFlavor, $nc(formatMap)->get($($Long::valueOf(format)))));
		if (flavor != nullptr) {
			$assign(ret, translateTransferable(contents, flavor, format));
		}
	}
	return ret;
}

void DataTransferer::processDataConversionRequests() {
	$useLocalCurrentObjectStackCache();
	if ($EventQueue::isDispatchThread()) {
		$var($AppContext, appContext, $AppContext::getAppContext());
		$nc($(getToolkitThreadBlockedHandler()))->lock();
		{
			$var($Throwable, var$0, nullptr);
			try {
				$var($Runnable, dataConverter, $cast($Runnable, $nc(appContext)->get(DataTransferer::DATA_CONVERTER_KEY)));
				if (dataConverter != nullptr) {
					dataConverter->run();
					appContext->remove(DataTransferer::DATA_CONVERTER_KEY);
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				$nc($(getToolkitThreadBlockedHandler()))->unlock();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

$longs* DataTransferer::keysToLongArray($SortedMap* map) {
	$init(DataTransferer);
	$useLocalCurrentObjectStackCache();
	$var($Set, keySet, $nc(map)->keySet());
	$var($longs, retval, $new($longs, $nc(keySet)->size()));
	int32_t i = 0;
	{
		$var($Iterator, iter, keySet->iterator());
		for (; $nc(iter)->hasNext(); ++i) {
			retval->set(i, $nc(($cast($Long, $(iter->next()))))->longValue());
		}
	}
	return retval;
}

$DataFlavorArray* DataTransferer::setToSortedDataFlavorArray($Set* flavorsSet) {
	$init(DataTransferer);
	$useLocalCurrentObjectStackCache();
	$var($DataFlavorArray, flavors, $new($DataFlavorArray, $nc(flavorsSet)->size()));
	flavorsSet->toArray(flavors);
	$var($Comparator, comparator, $nc($($DataFlavorUtil::getDataFlavorComparator()))->reversed());
	$Arrays::sort(flavors, comparator);
	return flavors;
}

$bytes* DataTransferer::inputStreamToByteArray($InputStream* str) {
	$init(DataTransferer);
	return $nc(str)->readAllBytes();
}

$LinkedHashSet* DataTransferer::getPlatformMappingsForNative($String* nat) {
	return $new($LinkedHashSet);
}

$LinkedHashSet* DataTransferer::getPlatformMappingsForFlavor($DataFlavor* df) {
	return $new($LinkedHashSet);
}

$IOException* DataTransferer::lambda$constructFlavoredObject$4($Class* clazz, $Class* dfrc) {
	$init(DataTransferer);
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({"can\'t find <init>(L"_s, clazz, ";)V for class: "_s}));
	return $new($IOException, $$concat(var$0, $($nc(dfrc)->getName())));
}

bool DataTransferer::lambda$constructFlavoredObject$3($Class* clazz, $Constructor* c) {
	$init(DataTransferer);
	$var($ClassArray, ptypes, $nc(c)->getParameterTypes());
	return ptypes != nullptr && ptypes->length == 1 && $nc($of(clazz))->equals(ptypes->get(0));
}

bool DataTransferer::lambda$constructFlavoredObject$2($Constructor* c) {
	$init(DataTransferer);
	return $Modifier::isPublic($nc(c)->getModifiers());
}

$ArrayList* DataTransferer::lambda$castToFiles$1($List* files, $ProtectionDomain* userProtectionDomain) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, fileList, $new($ArrayList));
	{
		$var($Iterator, i$, $nc(files)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Object, fileObject, i$->next());
			{
				$var($File, file, castToFile(fileObject));
				bool var$0 = file != nullptr;
				if (var$0) {
					bool var$1 = nullptr == $System::getSecurityManager();
					if (!var$1) {
						bool var$2 = isFileInWebstartedCache(file);
						var$1 = !(var$2 || isForbiddenToRead(file, userProtectionDomain));
					}
					var$0 = (var$1);
				}
				if (var$0) {
					fileList->add($($nc(file)->getCanonicalPath()));
				}
			}
		}
	}
	return fileList;
}

$String* DataTransferer::lambda$removeSuspectedData$0($String* str, $ProtectionDomain* userProtectionDomain) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, allowedFiles, $new($StringBuilder, $nc(str)->length()));
	$var($StringArray, uriArray, $nc(str)->split("(\\s)+"_s));
	{
		$var($StringArray, arr$, uriArray);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, fileName, arr$->get(i$));
			{
				$var($File, file, $new($File, fileName));
				bool var$0 = file->exists();
				if (var$0) {
					bool var$1 = isFileInWebstartedCache(file);
					var$0 = !(var$1 || isForbiddenToRead(file, userProtectionDomain));
				}
				if (var$0) {
					if (0 != allowedFiles->length()) {
						allowedFiles->append("\\r\\n"_s);
					}
					allowedFiles->append(fileName);
				}
			}
		}
	}
	return allowedFiles->toString();
}

void clinit$DataTransferer($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DataTransferer::DATA_CONVERTER_KEY, "DATA_CONVERTER_KEY"_s);
	$assignStatic(DataTransferer::textNatives, $Collections::synchronizedSet($$new($HashSet)));
	$assignStatic(DataTransferer::nativeCharsets, $Collections::synchronizedMap($$new($HashMap)));
	$assignStatic(DataTransferer::nativeEOLNs, $Collections::synchronizedMap($$new($HashMap)));
	$assignStatic(DataTransferer::nativeTerminators, $Collections::synchronizedMap($$new($HashMap)));
	{
		$var($DataFlavor, tJavaTextEncodingFlavor, nullptr);
		try {
			$assign(tJavaTextEncodingFlavor, $new($DataFlavor, "application/x-java-text-encoding;class=\"[B\""_s));
		} catch ($ClassNotFoundException& cannotHappen) {
		}
		$assignStatic(DataTransferer::javaTextEncodingFlavor, tJavaTextEncodingFlavor);
	}
	$assignStatic(DataTransferer::DEPLOYMENT_CACHE_PROPERTIES, $new($StringArray, {
		"deployment.system.cachedir"_s,
		"deployment.user.cachedir"_s,
		"deployment.javaws.cachedir"_s,
		"deployment.javapi.cachedir"_s
	}));
	$assignStatic(DataTransferer::deploymentCacheDirectoryList, $new($ArrayList));
}

DataTransferer::DataTransferer() {
}

$Class* DataTransferer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DataTransferer$$Lambda$lambda$removeSuspectedData$0::classInfo$.name)) {
			return DataTransferer$$Lambda$lambda$removeSuspectedData$0::load$(name, initialize);
		}
		if (name->equals(DataTransferer$$Lambda$lambda$castToFiles$1$1::classInfo$.name)) {
			return DataTransferer$$Lambda$lambda$castToFiles$1$1::load$(name, initialize);
		}
		if (name->equals(DataTransferer$$Lambda$getConstructors$2::classInfo$.name)) {
			return DataTransferer$$Lambda$getConstructors$2::load$(name, initialize);
		}
		if (name->equals(DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::classInfo$.name)) {
			return DataTransferer$$Lambda$lambda$constructFlavoredObject$2$3::load$(name, initialize);
		}
		if (name->equals(DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::classInfo$.name)) {
			return DataTransferer$$Lambda$lambda$constructFlavoredObject$3$4::load$(name, initialize);
		}
		if (name->equals(DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::classInfo$.name)) {
			return DataTransferer$$Lambda$lambda$constructFlavoredObject$4$5::load$(name, initialize);
		}
	}
	$loadClass(DataTransferer, name, initialize, &_DataTransferer_ClassInfo_, clinit$DataTransferer, allocate$DataTransferer);
	return class$;
}

$Class* DataTransferer::class$ = nullptr;

		} // datatransfer
	} // awt
} // sun