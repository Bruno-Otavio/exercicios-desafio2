import React from 'react';
import { View, Text, StyleSheet } from "react-native";

const Request = () => {
  return (
    <View style={styles.container}>
        <Text style={styles.title}>Send us a Request!</Text>
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
});

export default Request;
