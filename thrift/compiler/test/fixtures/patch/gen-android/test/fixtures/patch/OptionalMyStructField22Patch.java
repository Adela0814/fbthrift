/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class OptionalMyStructField22Patch implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("OptionalMyStructField22Patch");
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.SET, (short)4);
  private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)6);

  /**
   * Clears any set value. Applies first.
   */
  public final Boolean clear;
  /**
   * Patches any set value. Applies second.
   */
  public final MyStructField22Patch patch;
  /**
   * Assigns the value, if not already set. Applies third.
   */
  public final Set<String> ensure;
  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public final MyStructField22Patch patchAfter;
  public static final int CLEAR = 2;
  public static final int PATCH = 3;
  public static final int ENSURE = 4;
  public static final int PATCHAFTER = 6;

  public OptionalMyStructField22Patch(
      Boolean clear,
      MyStructField22Patch patch,
      Set<String> ensure,
      MyStructField22Patch patchAfter) {
    this.clear = clear;
    this.patch = patch;
    this.ensure = ensure;
    this.patchAfter = patchAfter;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public OptionalMyStructField22Patch(OptionalMyStructField22Patch other) {
    if (other.isSetClear()) {
      this.clear = TBaseHelper.deepCopy(other.clear);
    } else {
      this.clear = null;
    }
    if (other.isSetPatch()) {
      this.patch = TBaseHelper.deepCopy(other.patch);
    } else {
      this.patch = null;
    }
    if (other.isSetEnsure()) {
      this.ensure = TBaseHelper.deepCopy(other.ensure);
    } else {
      this.ensure = null;
    }
    if (other.isSetPatchAfter()) {
      this.patchAfter = TBaseHelper.deepCopy(other.patchAfter);
    } else {
      this.patchAfter = null;
    }
  }

  public OptionalMyStructField22Patch deepCopy() {
    return new OptionalMyStructField22Patch(this);
  }

  /**
   * Clears any set value. Applies first.
   */
  public Boolean isClear() {
    return this.clear;
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return this.clear != null;
  }

  /**
   * Patches any set value. Applies second.
   */
  public MyStructField22Patch getPatch() {
    return this.patch;
  }

  // Returns true if field patch is set (has been assigned a value) and false otherwise
  public boolean isSetPatch() {
    return this.patch != null;
  }

  /**
   * Assigns the value, if not already set. Applies third.
   */
  public Set<String> getEnsure() {
    return this.ensure;
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return this.ensure != null;
  }

  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public MyStructField22Patch getPatchAfter() {
    return this.patchAfter;
  }

  // Returns true if field patchAfter is set (has been assigned a value) and false otherwise
  public boolean isSetPatchAfter() {
    return this.patchAfter != null;
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof OptionalMyStructField22Patch))
      return false;
    OptionalMyStructField22Patch that = (OptionalMyStructField22Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.isSetClear(), that.isSetClear(), this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatch(), that.isSetPatch(), this.patch, that.patch)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchAfter(), that.isSetPatchAfter(), this.patchAfter, that.patchAfter)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {clear, patch, ensure, patchAfter});
  }

  // This is required to satisfy the TBase interface, but can't be implemented on immutable struture.
  public void read(TProtocol iprot) throws TException {
    throw new TException("unimplemented in android immutable structure");
  }

  public static OptionalMyStructField22Patch deserialize(TProtocol iprot) throws TException {
    Boolean tmp_clear = null;
    MyStructField22Patch tmp_patch = null;
    Set<String> tmp_ensure = null;
    MyStructField22Patch tmp_patchAfter = null;
    TField __field;
    iprot.readStructBegin();
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case CLEAR:
          if (__field.type == TType.BOOL) {
            tmp_clear = iprot.readBool();
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCH:
          if (__field.type == TType.STRUCT) {
            tmp_patch = MyStructField22Patch.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.SET) {
            {
              TSet _set41 = iprot.readSetBegin();
              tmp_ensure = new HashSet<String>(Math.max(0, 2*_set41.size));
              for (int _i42 = 0; 
                   (_set41.size < 0) ? iprot.peekSet() : (_i42 < _set41.size); 
                   ++_i42)
              {
                String _elem43;
                _elem43 = iprot.readString();
                tmp_ensure.add(_elem43);
              }
              iprot.readSetEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            tmp_patchAfter = MyStructField22Patch.deserialize(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();

    OptionalMyStructField22Patch _that;
    _that = new OptionalMyStructField22Patch(
      tmp_clear
      ,tmp_patch
      ,tmp_ensure
      ,tmp_patchAfter
    );
    _that.validate();
    return _that;
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.clear != null) {
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
    }
    if (this.patch != null) {
      oprot.writeFieldBegin(PATCH_FIELD_DESC);
      this.patch.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.ensure != null) {
      if (isSetEnsure()) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        {
          oprot.writeSetBegin(new TSet(TType.STRING, this.ensure.size()));
          for (String _iter44 : this.ensure)          {
            oprot.writeString(_iter44);
          }
          oprot.writeSetEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    if (this.patchAfter != null) {
      oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
      this.patchAfter.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    return TBaseHelper.toStringHelper(this, indent, prettyPrint);
  }

  public void validate() throws TException {
    // check for required fields
  }

}

