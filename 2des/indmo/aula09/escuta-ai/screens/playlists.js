import React from 'react';
import { View, Text, StyleSheet } from "react-native";

const PlayLists = () => {
  return (
    <View style={styles.container}>
        <Text>Hello Play Lists</Text>
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
});

export default PlayLists;

