#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
cimport facebook.thrift.annotation.hack.types as _facebook_thrift_annotation_hack_types
import facebook.thrift.annotation.hack.types as _facebook_thrift_annotation_hack_types

cimport test.fixtures.basic.module.types_reflection as _types_reflection


cdef __EnumData __MyEnum_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyEnum](), MyEnum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum"


__SetMetaClass(<PyTypeObject*> MyEnum, <PyTypeObject*> __MyEnumMeta)



cdef __UnionTypeEnumData __MyUnion_union_type_enum_data  = __UnionTypeEnumData._fbthrift_create(
    __createEnumDataForUnionType[cMyUnion](),
    __MyUnionType,
)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyUnion_Union_TypeMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyUnion_union_type_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyUnion_union_type_enum_data.get_all_names()

    def __len__(cls):
        return __MyUnion_union_type_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyUnion_union_type_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class __MyUnionType(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyUnion_union_type_enum_data.get_by_name(name)


__SetMetaClass(<PyTypeObject*> __MyUnionType, <PyTypeObject*> __MyUnion_Union_TypeMeta)


@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj = make_shared[cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = make_shared[cMyStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStruct", {
          "MyIntField": deref(self._cpp_obj).MyIntField_ref().has_value(),
          "MyStringField": deref(self._cpp_obj).MyStringField_ref().has_value(),
          "MyDataField": deref(self._cpp_obj).MyDataField_ref().has_value(),
          "myEnum": deref(self._cpp_obj).myEnum_ref().has_value(),
          "oneway": deref(self._cpp_obj).oneway_ref().has_value(),
          "readonly": deref(self._cpp_obj).readonly_ref().has_value(),
          "idempotent": deref(self._cpp_obj).idempotent_ref().has_value(),
          "floatSet": deref(self._cpp_obj).floatSet_ref().has_value(),
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline MyIntField_impl(self):

        return deref(self._cpp_obj).MyIntField_ref().value()

    @property
    def MyIntField(self):
        return self.MyIntField_impl()

    cdef inline MyStringField_impl(self):

        return (<bytes>deref(self._cpp_obj).MyStringField_ref().value()).decode('UTF-8')

    @property
    def MyStringField(self):
        return self.MyStringField_impl()

    cdef inline MyDataField_impl(self):

        if self.__fbthrift_cached_MyDataField is None:
            self.__fbthrift_cached_MyDataField = MyDataItem._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).MyDataField_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_MyDataField

    @property
    def MyDataField(self):
        return self.MyDataField_impl()

    cdef inline myEnum_impl(self):

        if self.__fbthrift_cached_myEnum is None:
            self.__fbthrift_cached_myEnum = translate_cpp_enum_to_python(MyEnum, <int>(deref(self._cpp_obj).myEnum_ref().value()))
        return self.__fbthrift_cached_myEnum

    @property
    def myEnum(self):
        return self.myEnum_impl()

    cdef inline oneway_impl(self):

        return <pbool> deref(self._cpp_obj).oneway_ref().value()

    @property
    def oneway(self):
        return self.oneway_impl()

    cdef inline readonly_impl(self):

        return <pbool> deref(self._cpp_obj).readonly_ref().value()

    @property
    def readonly(self):
        return self.readonly_impl()

    cdef inline idempotent_impl(self):

        return <pbool> deref(self._cpp_obj).idempotent_ref().value()

    @property
    def idempotent(self):
        return self.idempotent_impl()

    cdef inline floatSet_impl(self):

        if self.__fbthrift_cached_floatSet is None:
            self.__fbthrift_cached_floatSet = Set__float._fbthrift_create(__reference_shared_ptr(deref(self._cpp_obj).floatSet_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_floatSet

    @property
    def floatSet(self):
        return self.floatSet_impl()


    def __hash__(MyStruct self):
        return super().__hash__()

    def __repr__(MyStruct self):
        return super().__repr__()

    def __str__(MyStruct self):
        return super().__str__()


    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStruct](
            self._cpp_obj,
            (<MyStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStruct"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cMyStruct](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 8

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[cMyStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class MyDataItem(thrift.py3.types.Struct):
    def __init__(MyDataItem self, **kwargs):
        self._cpp_obj = make_shared[cMyDataItem]()
        self._fields_setter = _fbthrift_types_fields.__MyDataItem_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyDataItem self, **kwargs):
        return self

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyDataItem", {
        })

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyDataItem] cpp_obj):
        __fbthrift_inst = <MyDataItem>MyDataItem.__new__(MyDataItem)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst


    def __hash__(MyDataItem self):
        return super().__hash__()

    def __repr__(MyDataItem self):
        return super().__repr__()

    def __str__(MyDataItem self):
        return super().__str__()


    def __copy__(MyDataItem self):
        cdef shared_ptr[cMyDataItem] cpp_obj = make_shared[cMyDataItem](
            deref(self._cpp_obj)
        )
        return MyDataItem._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyDataItem](
            self._cpp_obj,
            (<MyDataItem>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyDataItem()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyDataItem].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyDataItem"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cMyDataItem](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 0

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyDataItem self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyDataItem](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyDataItem self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyDataItem]()
        with nogil:
            needed = serializer.cdeserialize[cMyDataItem](buf, self._cpp_obj.get(), proto)
        return needed




@__cython.auto_pickle(False)
cdef class MyUnion(thrift.py3.types.Union):
    Type = __MyUnionType

    def __init__(
        self, *,
        MyEnum myEnum=None,
        MyStruct myStruct=None,
        MyDataItem myDataItem=None,
        floatSet=None
    ):
        self._cpp_obj = __to_shared_ptr(cmove(MyUnion._make_instance(
          NULL,
          myEnum,
          myStruct,
          myDataItem,
          floatSet,
        )))
        self._load_cache()

    @staticmethod
    def fromValue(value):
        if value is None:
            return MyUnion()
        if isinstance(value, MyEnum):
            return MyUnion(myEnum=value)
        if isinstance(value, MyStruct):
            return MyUnion(myStruct=value)
        if isinstance(value, MyDataItem):
            return MyUnion(myDataItem=value)
        if isinstance(value, Set__float):
            return MyUnion(floatSet=value)
        raise ValueError(f"Unable to derive correct union field for value: {value}")

    @staticmethod
    cdef unique_ptr[cMyUnion] _make_instance(
        cMyUnion* base_instance,
        MyEnum myEnum,
        MyStruct myStruct,
        MyDataItem myDataItem,
        object floatSet
    ) except *:
        cdef unique_ptr[cMyUnion] c_inst = make_unique[cMyUnion]()
        cdef bint any_set = False
        if myEnum is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_myEnum(<cMyEnum><int>myEnum)
            any_set = True
        if myStruct is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_myStruct(deref((<MyStruct?> myStruct)._cpp_obj))
            any_set = True
        if myDataItem is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_myDataItem(deref((<MyDataItem?> myDataItem)._cpp_obj))
            any_set = True
        if floatSet is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_floatSet(<cset[float]>deref(Set__float(floatSet)._cpp_obj))
            any_set = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return cmove(c_inst)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cMyUnion] cpp_obj):
        __fbthrift_inst = <MyUnion>MyUnion.__new__(MyUnion)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        __fbthrift_inst._load_cache()
        return __fbthrift_inst

    @property
    def myEnum(self):
        if self.type.value != 1:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not myEnum')
        return self.value

    @property
    def myStruct(self):
        if self.type.value != 2:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not myStruct')
        return self.value

    @property
    def myDataItem(self):
        if self.type.value != 3:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not myDataItem')
        return self.value

    @property
    def floatSet(self):
        if self.type.value != 4:
            raise AttributeError(f'Union contains a value of type {self.type.name}, not floatSet')
        return self.value


    def __hash__(MyUnion self):
        return  super().__hash__()

    cdef _load_cache(MyUnion self):
        self.type = MyUnion.Type(<int>(deref(self._cpp_obj).getType()))
        cdef int type = self.type.value
        if type == 0:    # Empty
            self.value = None
        elif type == 1:
            self.value = translate_cpp_enum_to_python(MyEnum, <int>deref(self._cpp_obj).get_myEnum())
        elif type == 2:
            self.value = MyStruct._fbthrift_create(make_shared[cMyStruct](deref(self._cpp_obj).get_myStruct()))
        elif type == 3:
            self.value = MyDataItem._fbthrift_create(make_shared[cMyDataItem](deref(self._cpp_obj).get_myDataItem()))
        elif type == 4:
            self.value = Set__float._fbthrift_create(make_shared[cset[float]](deref(self._cpp_obj).get_floatSet()))

    def __copy__(MyUnion self):
        cdef shared_ptr[cMyUnion] cpp_obj = make_shared[cMyUnion](
            deref(self._cpp_obj)
        )
        return MyUnion._fbthrift_create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyUnion](
            self._cpp_obj,
            (<MyUnion>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyUnion()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyUnion].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyUnion"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cMyUnion](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyUnion self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyUnion](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyUnion self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyUnion]()
        with nogil:
            needed = serializer.cdeserialize[cMyUnion](buf, self._cpp_obj.get(), proto)
        # force a cache reload since the underlying data's changed
        self._load_cache()
        return needed


@__cython.auto_pickle(False)
cdef class Set__float(thrift.py3.types.Set):
    def __init__(self, items=None):
        if isinstance(items, Set__float):
            self._cpp_obj = (<Set__float> items)._cpp_obj
        else:
            self._cpp_obj = Set__float._make_instance(items)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[float]] c_items):
        __fbthrift_inst = <Set__float>Set__float.__new__(Set__float)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Set__float self):
        cdef shared_ptr[cset[float]] cpp_obj = make_shared[cset[float]](
            deref(self._cpp_obj)
        )
        return Set__float._fbthrift_create(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    @staticmethod
    cdef shared_ptr[cset[float]] _make_instance(object items) except *:
        cdef shared_ptr[cset[float]] c_inst = make_shared[cset[float]]()
        if items is not None:
            for item in items:
                if not isinstance(item, (float, int)):
                    raise TypeError(f"{item!r} is not of type float")
                deref(c_inst).insert(item)
        return c_inst

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, float):
            return False
        return pbool(deref(self._cpp_obj).count(item))


    def __iter__(self):
        if not self:
            return
        cdef __set_iter[cset[float]] itr = __set_iter[cset[float]](self._cpp_obj)
        cdef float citem = 0
        for i in range(deref(self._cpp_obj).size()):
            itr.genNext(self._cpp_obj, citem)
            yield citem

    def __hash__(self):
        return super().__hash__()

    def __richcmp__(self, other, int op):
        if isinstance(other, Set__float):
            # C level comparisons
            return __setcmp(
                self._cpp_obj,
                (<Set__float> other)._cpp_obj,
                op,
            )
        return self._fbthrift_py_richcmp(other, op)

    cdef _fbthrift_do_set_op(self, other, __cSetOp op):
        if not isinstance(other, Set__float):
            other = Set__float(other)
        cdef shared_ptr[cset[float]] result
        return Set__float._fbthrift_create(__set_op[cset[float]](
            self._cpp_obj,
            (<Set__float>other)._cpp_obj,
            op,
        ))

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__Set__float()


Set.register(Set__float)
