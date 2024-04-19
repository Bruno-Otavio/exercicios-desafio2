import React from 'react';
import { View, Text, StyleSheet, TouchableOpacity, TextInput, } from "react-native";

const Request = () => {
  return (
    <View style={styles.container}>
        <Text style={styles.title}>Send us a Request!</Text>
        <View style={styles.form}>
          <Text style={{ fontSize: 25 }}>Title</Text>
          <TextInput style={styles.textInput}/>

          <Text sytle={{ fontSize: 25 }}>Author</Text>
          <TextInput style={styles.textInput}/>

          <TouchableOpacity style={styles.button}>
            <Text style={{ fontSize: 15 }}>
              Send
            </Text>
          </TouchableOpacity>
        </View>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#FEFAF6',
    alignItems: 'center',
    justifyContent: 'center',
  },
  title: {
    color: "#102C57",
    fontSize: 25,
    fontWeight: 500,
    marginBottom: 25,
  },
  form: {
    backgroundColor: "#EADBC8",
    padding: 20,
    alignItems: 'center',
    justifyContent: 'center',
    gap: 10,
    borderRadius: 10,
  },
  textInput: {
    padding: 5,
    height: 40,
    width: 200,
    borderRadius: 5,
    fontSize: 15,
    backgroundColor: "#FEFAF6",
  },
  button: {
    backgroundColor: "#DAC0A3",

    paddingTop: 15,
    paddingBottom: 15,
    paddingLeft: 25,
    paddingRight: 25,

    borderRadius: 15,

    marginTop: 15,
  }
});

export default Request;
