import React from 'react';
import { View, Text, StyleSheet, Image } from "react-native";

const PlayCard = ({ image, title, author }) => {
  return (
    <View style={styles.container}>
        <Image
            source={{ uri: {image} }}
        />
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

export default PlayCard;

